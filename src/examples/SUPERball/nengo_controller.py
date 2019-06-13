'''
@file main.py - entry point for controlling SUPERball from Nengo

@author P. Michael Furlong 
@email furlong@nasa.gov
@date 2019-06-13
'''

import nengo
import numpy as np
import superball

def stim_func(t):
    if t < 1.0:
        return 1
    else:
        return 0
    ### end if
### end stim_func

def main():

    robot = superball.SUPERBall()
    print('Robot created')

    with nengo.Network() as model:
       

        stim = nengo.Node(stim_func)
        ens = nengo.Ensemble(n_neurons = 500, dimensions = 2)

        # Note: this oscillator is a hack, and the values shouldn't 
        # be taken seriously.  It will be replaced by the CPG model.
        # PMF 2019-06-13
        w = 2 
        tau = 0.01 
        def osc_func(x):
            return x[0] + tau * w * x[1], -tau * w * x[0] + x[1]
        nengo.Connection(ens, ens, function = osc_func, synapse = tau)

        nengo.Connection(stim,ens[0])

        arm_out = nengo.Node(output=robot, size_in=2)
        nengo.Connection(ens, arm_out, synapse = 0.1)
        p_arm = nengo.Probe(ens, synapse = 0.01)
    ### end with nengo.Network() as model

    with nengo.Simulator(model) as sim:
        while True:
            sim.step()
    ### end with
### end main

if __name__ == '__main__':
    main()
