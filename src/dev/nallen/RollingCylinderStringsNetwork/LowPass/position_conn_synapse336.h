#ifndef POSITION_CONN_SYNAPSE336_H_
#define POSITION_CONN_SYNAPSE336_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse336 States
enum PositionConnSynapse336States {
    POSITION_CONN_SYNAPSE336_L,
};

// position_conn_synapse336 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse336States state;
} PositionConnSynapse336;

// position_conn_synapse336 Initialisation function
void PositionConnSynapse336Init(PositionConnSynapse336* me);

// position_conn_synapse336 Execution function
void PositionConnSynapse336Run(PositionConnSynapse336* me);

#endif // POSITION_CONN_SYNAPSE336_H_