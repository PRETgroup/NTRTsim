#ifndef POSITION_CONN_SYNAPSE146_H_
#define POSITION_CONN_SYNAPSE146_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse146 States
enum PositionConnSynapse146States {
    POSITION_CONN_SYNAPSE146_L,
};

// position_conn_synapse146 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse146States state;
} PositionConnSynapse146;

// position_conn_synapse146 Initialisation function
void PositionConnSynapse146Init(PositionConnSynapse146* me);

// position_conn_synapse146 Execution function
void PositionConnSynapse146Run(PositionConnSynapse146* me);

#endif // POSITION_CONN_SYNAPSE146_H_