% calculate YAML parameters for IROS 2018 paper
% Andrew P. Sabelhaus, Feb 2018

clear all;
close all;
clc;

% We need to do the following calculations for the YAML file,
% based on the physical parameters of the robot:

% (1) Density of rigid bodies (needs volume of each)
% (2) Cable parameters (pretension, etc)
% (3) Assembly positions (spine translations, etc)

% I'm assuming that we've already done the math to create the robot's
% leg, foot, shoulder, hip models.

% All below, we use the following scaling.
% For example, an s=100 means we're using length units of cm.
% ^EDIT: this script is not set up properly. Procedure SHOULD BE:
% (1) get everything in SI units
% (2) apply scaling factor AFTER all in SI units. 
% ...right now, we're applying scaling factor to non-SI units and it's
% getting all mixed up. For example, should get density in kg/m^3 by just
% convering g/cm^3 the regular high-school physics way, then after that,
% apply the 's'.
s = 100;

% Physical parameters of the models. Lengths in cm.
% YAML uses half-extents for the box dimensions! These are*full* extents.

% Legs:
leg_height = 17.85;
leg_width = 0.3; 
leg_length_Y = 2.5; % the left-right dimension, with respect to Laika
foot_radius = 1.25;

% Shoulders/hips:
% the base box
hip_length_X = 12.6;
hip_height = 6;
hip_length_Y = 7;
% the two "ends" of the "T"
hip_T_height = 6;
hip_T_width = 0.3;
hip_T_length_Y = 17.6;

% Vertebrae:
rod_r = 0.64; % cm. THis is roughly 1/4 inch.
% For the standard vertebrae, let's declare each node location,
% then get the total length vector.
% We'll name them top, bottom, right, left (tbrl).
v_t = [6.5, 0, 9.6];
v_b = [6.5, 0, -9.6];
v_r = [-6.5, 9.6, 0];
v_l = [-6.5, -9.6, 0];
% For the rotating vertebra: same thing.
v_rot_t = [5.5, 0, 9.2];
v_rot_b = [5.5, 0, -9.2];
v_rot_r = [-5.5, 9.2, 0];
v_rot_l = [-5.5, -9.2, 0];

%% (1) Density of rigid bodies

% For the front and rear (symmetric!), let's calculate the total volume.
% That's going to be, in cm^3, the volume of
% 2 x foot
% 2 x leg box
% 1 x hips base
% 1 x hips "T" top

leg_vol = (leg_height * leg_width * leg_length_Y) + ...
          ( (4/3) * pi * foot_radius^3);
      
rear_vol_cm = 2 * leg_vol + ...
           hip_length_X * hip_height * hip_length_Y + ...
           hip_T_height * hip_T_width * hip_T_length_Y;

% Convert volume in cm^3 to m^3: that's 1/(10^3).
rear_vol_m = rear_vol_cm * (1e-6);
       
% Now, for density. We want the total force to be in N, for F = m*g.
% Here, however, we're using g' = 100 * g, so total mass (in kg) should be
% adjusted down by a factor of 100. (Our g = 981 in simulation.)
% E.g., we want our mass to be in deci-grams (kg / 100, not kg / 1000.)

% NEED TO DO: look at the dimensional analysis / scaling analysis again,
% I really don't think we're doing this correctly. Are we really supposed
% to scale mass also, like this? Or is density different? I don't think
% it's this easy as just saying "100" ...

% Measured mass of one full rear:
rear_mass_kg = 0.181; % was 181 grams
% ADJUSTED on 3/1/18: forgot to include the weight of the cables for the
% motors! Those were 38g each, so the new mass is
rear_mass_kg = 0.257;
% So we want the mass to be
%read_mass_adj = rear_mass_kg * 100;

% ...actually, Drew thinks this should be different.
% Really need to look up that scaling stuff. Let's leave it for now,
% and just calculate the mass as if we were not scaling anything,
% using the m^3 volume above.

% From older analysis: seems we should do 1 / s^3 (where 's' is scaling
% factor.) So for example, this would be 1 / (10^3) = 1e-6, again.

rear_dens_si = rear_mass_kg / rear_vol_m;
rear_dens_adj = rear_dens_si * (1 / s^3);

% Let's do the vertebrae. The length of each rod is just the distance
% (vector norm).
% Just a quick calculation right now does show that all rods are the same
% length, within some small millimeter tolerance that we don't care about.
rod_l = norm(v_r);
rot_rod_l = norm(v_rot_r);

% So, the total volume, in cm^3, for each vertebra is four times the volume
% of one rod.
v_vol_cm = 4 * ( pi * rod_r^2 * rod_l);
v_rot_vol_cm = 4 * (pi * rod_r^2 * rot_rod_l);
% converted to m^3:
v_vol_m = v_vol_cm * (1e-6);
v_rot_vol_m = v_rot_vol_cm * (1e-6);

% one vertebra weighs:
% EDIT 3/1/15: re-weighing the vertebra put it at 283 with cables,
% so subtracting the cables gives us
%v_mass_kg = 0.207;
%v_mass_kg = 0.145;
% ...actually, need to average over all vertebrae, really.
% passive are 90g, rotvert is 167 - cable = 129
% So, total among all vertebrae is
all_vert_mass = (0.207 * 2 + 0.090 * 2 + 0.129);
v_mass_kg = all_vert_mass/5;

% density is then:
v_dens_si = v_mass_kg / v_vol_m;
v_dens_adj = v_dens_si * (1/s^3);
v_rot_dens_si = v_mass_kg / v_rot_vol_m;
v_rot_dens_adj = v_rot_dens_si * (1/s^3);

%% (2) Cable parameters.

% We need to calculate the following, for each set of cables:
% (a) pretension 
% ...but also, spring constant, but we'll probably pull this out of a
% spreadsheet on the google drive, so not calculated here.

% Initial lengths of each set of cables. We'll split into 5 sets of
% cables: one set for all the saddles, and one each for the 4 sets of
% horizontal cables.

% Holly set 3.12 inch for the bottom
x0_bottom = 7.8;
% Hunter's dimension was 3.75 inch = 9.5 cm
x0_else = 9.5;

% At equilibrium, with Laika standing, here were the "stretched" lengths
% of each cable: (in cm, measured with calipers)
x_saddle_cm = 14.7;
x_top_cm = 10.1;
x_sides_cm = 9.9;
x_bottom_cm = 9.3; % for black lattice strip, Drew measured 9.3, not 9.4

% Then, as we'll be doing F = k (x - x0), the total stretched length (x-x0)
% for each will be:
stretch_saddle_cm = x_saddle_cm - x0_else;
stretch_top_cm = x_top_cm - x0_else;
stretch_sides_cm = x_sides_cm - x0_else;
stretch_bottom_cm = x_bottom_cm - x0_bottom;

% Need to convert these to meters.
stretch_saddle_m = stretch_saddle_cm * (1/s);
stretch_top_m = stretch_top_cm * (1/s);
stretch_sides_m = stretch_sides_cm * (1/s);
stretch_bottom_m = stretch_bottom_cm * (1/s);

% From the spreadsheet, here are the spring constants for each segment.
% Thicknesses are: 
% Bottom: 0.35 inch
% All else: (was it 1.6? see spreadsheet...)
%k_bottom = 291;
%k_else = 174;
% This was at -1 std dev on the data. Instead, we could try the following:
% Min: bottom = 252, else = 141
% Mean: bottom = 434, else = 244
% Max: bottom = 616, else = 346
%k_bottom = 434;
% for the black lattice material, https://docs.google.com/spreadsheets/d/1vufW-rk9Y2as5zzanuQNYwpHWIGvXa4Yp8Swb1RdZeA/edit#gid=0
%k_bottom = 515;
%k_else = 244;
%k_else = 174; % from some calcs on google drive
% in N/m.0.

%%%%%% FOR THE ICRA 2019 TESTS:
% Here are the spring constants for the orange lattice spread out over the
% range of tests:

%k_else = 216;
%k_else = 227;
%k_else = 237;
%k_else = 248;
k_else = 258;

% A larger test to see if the foot lift continues to increase
% monotonically:
%k_else = 300;
%k_else = 400;

% For ICRA 2019, making the following changes:
% 1) The bottom lattice really needs to be a sum of all the lattices there.
% Even though some went slack, it's going to be best to model it as springs
% in parallel. That means, 2*244 + 515 = 1003
%k_bottom = 1003;
% ...but, now that we're varying the orange lattice material, this is more
% properly:
%k_bottom = 2*k_else + 515

% with the corrected data, it seems like it's probably only the black that
% was in tension (was seen from the model itself), since the spring const
% for one black element is:
%k_bottom = 810;
% at + (1/5) * 1 std dev, spring const would be
%k_bottom = 941;

% For the two-cables-varying tests, here are all the +/- 2 sigma test
% points for the black buna-n cable:
%k_bottom = 547;
%k_bottom = 678;
%k_bottom = 810;
%k_bottom = 941;
k_bottom = 1073;

% ...but did we really have all 3 in tension? Or was is just two?
% 244 + 515 = 759
%k_bottom = 759;

% 2) For the sides, we actually need two different models! One for the
% actuated side, with the mechanical springs, and one for the unactuated
% side, with the lattice. From the W.B. Jones #240 spring, 1.07 lbf/in, =
k_mechspring = 187;

% Then, we can calculate "pretension", which is F = k * stretch
% for each cable. E.g., we're placing Laika in its equilibrium
% configuration at the start of the simulation. In N.
F_saddle = k_else * stretch_saddle_m;
F_top = k_else * stretch_top_m;
F_sides = k_else * stretch_sides_m;
F_bottom = k_bottom * stretch_bottom_m;

% NOTE! for the actuated side, we *cannot* do:
% F_mechspringside = k_mechspring * stretch_sides_m;
% ...because that's not the condition that holds. Instead, what's going on
% is that we tensioned the cable side so it had zero force at the length of
% the lattice cables. This actually gets really complicated, with 2 springs
% happening for some amount of time, then when the spring force from the
% mechanical spring causes a length change that surpasses the lattice, it
% goes back to only one cable.
% Let's not model that (see what we can do otherwise.)
% One easy way is to say "pretension is the same." That way we know we have
% equilibrium.
F_mechspringside = F_sides;

% And just to record it here, the offset between the vertebrae should
% roughly be the same as the horizontal distance between two vertebrae
% nodes, as in
offset = x_sides_cm;

% According to our earlier dimensional analysis,
% we've got to scale pretension force by the same quantity as gravity and
% lengths.
% Roughly, this is the same as if we just used cm in the stretch
% originally.
F_saddle_adj = F_saddle * s;
F_top_adj = F_top * s;
F_sides_adj = F_sides * s;
F_bottom_adj = F_bottom * s;
% For the mechanical spring,
F_mechspringside_adj = F_mechspringside * s;







