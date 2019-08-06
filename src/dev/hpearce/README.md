# hpearce dev directory

This directory was used by Hammond Pearce during the 2019 Summer Internships. 
It was developed to see if neuromorphic control (i.e. a spiking neural network) could be used with SUPERBall.
As part of this, several elements of code were developed.

## Dependencies:

You will need to install libzmq and `pip3 install hebi-py` and `pip3 install pyzmq`

## LengthControllerYAMLZmq

This is located in the `SUPERballChainZmq` directory, which is a fork of mleroy's `SUPERballChain` directory.

This is a new controller for use with NTRTsim. It can be loaded with any YAML file, although like all other controllers
the string tags will need to be loaded externally (i.e. in your main() function or elsewhere). 
In this directory, there is a `#define` in `config.h` which changes between the tags used in Marc Leroy's YAML style
(i.e. superball_rod01) to those used by Jonathon Bruce (i.e. m01). Note that both jbruce and mleroy have identical numbering
in their YAML models, but they don't have the same tag names nor the same motor properties. There are also some
dimensions that don't match exactly, and jbruce's model is of a higher fidelity.

The model that Hammond used with the LengthControllerYAMLZmq is located at `NTRTsim/resources/YamlStructures/hpearce`

This controller works by exposing control of the 24 strings of SUPERball to a ZMQ interface (REQ/RESP type).

*Input Format*: `reset` or `motor_name:motor_length,motor_name:motor_length, ... motor_name:motor_length`

If the input is `reset` NTRT will be reset to initial configuration. You must read the response and discard it.
If the input is of the control format, then each _motor\_name_ will have their desired set point set to _motor\_length_, which is a percentage change to the initial length of that motor's string.  All lengths are floating point.

For instance, if motor `superball_rod03` has initial length 8dm, and is set to 0.5, then the set point will be made to be 4dm.

*Output Format*: `simulation_time,robot_com_x,robot_com_y,robot_com_z,motor_name:motor_tension,motor_name:motor_tension, ... motor_name:motor_tension`

All tensions, the simulation\_time, and the com values are floating point. 

## the python_controllers

In the `python_controller` directory can be found the different neuromorphic and test controllers for SUPERball (both real and simulation). Note that these are both python3.
Primarily, these come from the two python files `main.py` and `main_pso.py`.

`main_pso.py` is used for running only the NTRTsim simulator with the PSO algorithm. At the start of `main()` are a number of
variables you can use to control and manipulate the optimisation process. 
You may need to create a `/pso_results` directory in this folder for the csv results.

`main.py` is used for testing a result of `main_pso.py` in more detail (i.e. saving actual COM paths, producing graphs), 
and actually putting it on SUPERball if desired.
It also has a number of variables you can use at the start of `main()` to manage this process.
You may need to create a `/results` firectory in this folder for csv results.

There are other support files in this directory. 
* `nengo_one_osc_no_readout.py` contains the design of the nengo oscillator used with all experiments.
* `superball.py` contains the code to interface the controller using ZMQ with NTRT's LengthControllerYAMLZmq
* `realsuperball.py` contains the code to interface the controller using heby-py to the real SUPERball. (the interface matches superball.py)
* `test_heby.py` is used for small testing of code for the hebi-py API. It can be ignored safely.
* `translate_jbruce_indexes.py` was a small utility script for translating between the YAML files. It can be ignored safely.
* The various `standalone_XXXXX.py` files were used in initial debugging and testing of the project. They can be ignored safely.

## the from_michael directory

This code was provided by P. Michael Furlong in the initial stages of this internship, and demonstrates the oscillator running under nengo that we used in this project. Invoke `nengo` from the command line and use the browser GUI to examine the examples in here.

