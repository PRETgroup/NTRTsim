#ifndef POSITION_CONN_SYNAPSE140_H_
#define POSITION_CONN_SYNAPSE140_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse140 States
enum PositionConnSynapse140States {
    POSITION_CONN_SYNAPSE140_L,
};

// position_conn_synapse140 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse140States state;
} PositionConnSynapse140;

// position_conn_synapse140 Initialisation function
void PositionConnSynapse140Init(PositionConnSynapse140* me);

// position_conn_synapse140 Execution function
void PositionConnSynapse140Run(PositionConnSynapse140* me);

#endif // POSITION_CONN_SYNAPSE140_H_