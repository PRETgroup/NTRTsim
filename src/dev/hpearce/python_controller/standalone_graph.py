import numpy as np
import matplotlib.pyplot as plt
import math


w = [0.7, 0.8, 0.9, 1, 1.1, 1.2]
Displ_AvgX = [46.8977777777778, 51.7277777777778, 58.1933333333333, 65.9488888888889, 57.3911111111111, 84.6811111111111]
Displ_AvgY = [-45.4633333333333, -54.8755555555556, -60.6955555555556, -61.6444444444444, -54.2722222222222, -56.3866666666667]
Displ_Max = [71.6854887686483, 78.6204159236009, 89.9278583087577, 94.0245085070909, 102.672685754294, 113.709061204462]
Displ_Avg = [65.7226388377602, 75.7442701044453, 84.7731271179063, 92.1408685118115, 93.3553247194795, 105.375804768546]
Displ_Min = [62.6555871411321, 72.0217224176151, 80.8067967438383, 88.8665679544338, 82.8855367359107, 99.608682854458]
Angle_Max = [-0.649945972408557, -0.554286029833986, -0.628598059646603, -0.443465442342051, 1.5270988073892, -0.463689558828787]
Angle_Avg = [-0.803339369928778, -0.755972660018971, -0.766601344144798, -0.819779390989871, -0.453479636130464, -0.986216761744256]
Angle_Min = [-0.990848180480164, -0.897450198238514, -1.02103844445021, -1.08687558619861, -1.38387283701996, -1.31668672039891]
Angle_StdDev = [0.117428349585933, 0.099720077315212, 0.137265565515817, 0.214225493606978, 0.91786485284343, 0.281103191309553]

Freq = [a / 6 for a in w]
#Displ_Error = [[a - b for a, b in zip(Displ_Avg,Displ_Min)], [a - b for a, b in zip(Displ_Max,Displ_Avg)]]

Displ_Error = [[abs(a - b) for a, b in zip(Angle_Avg,Angle_Min)], [abs(a - b) for a, b in zip(Angle_Avg,Angle_Max)]]
fig = plt.figure()
ax = fig.add_subplot(111)
   
# ax.errorbar(Freq,Displ_Avg, yerr=Displ_Error,fmt='o-',ecolor='g', capsize=6, capthick=1)
# ax.set_ylim(0,120)
# #ax.legend()
# ax.set_xlabel('Oscillator Frequency (Hz)')
# ax.set_ylabel('Displacement (m)')
# plt.title('Nengo LIF SUPERball Displacement in 60s')
# plt.show()

ax.errorbar(Freq,Angle_Avg, yerr=Displ_Error,fmt='o-',ecolor='g', capsize=6, capthick=1)
#ax.legend()
ax.set_xlabel('Oscillator Frequency (Hz)')
ax.set_ylabel('Angle of Travel (rad)')
plt.title('Nengo LIF SUPERball Angle of Travel in 60s')
plt.show()