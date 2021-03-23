#ifndef POSITION_CONN_SYNAPSE283_H_
#define POSITION_CONN_SYNAPSE283_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse283 States
enum PositionConnSynapse283States {
    POSITION_CONN_SYNAPSE283_L,
};

// position_conn_synapse283 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse283States state;
} PositionConnSynapse283;

// position_conn_synapse283 Initialisation function
void PositionConnSynapse283Init(PositionConnSynapse283* me);

// position_conn_synapse283 Execution function
void PositionConnSynapse283Run(PositionConnSynapse283* me);

#endif // POSITION_CONN_SYNAPSE283_H_