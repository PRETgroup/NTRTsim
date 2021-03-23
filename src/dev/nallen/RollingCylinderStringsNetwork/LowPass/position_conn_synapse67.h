#ifndef POSITION_CONN_SYNAPSE67_H_
#define POSITION_CONN_SYNAPSE67_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse67 States
enum PositionConnSynapse67States {
    POSITION_CONN_SYNAPSE67_L,
};

// position_conn_synapse67 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse67States state;
} PositionConnSynapse67;

// position_conn_synapse67 Initialisation function
void PositionConnSynapse67Init(PositionConnSynapse67* me);

// position_conn_synapse67 Execution function
void PositionConnSynapse67Run(PositionConnSynapse67* me);

#endif // POSITION_CONN_SYNAPSE67_H_