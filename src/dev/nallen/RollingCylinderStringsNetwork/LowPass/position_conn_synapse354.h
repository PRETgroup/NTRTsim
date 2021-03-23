#ifndef POSITION_CONN_SYNAPSE354_H_
#define POSITION_CONN_SYNAPSE354_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse354 States
enum PositionConnSynapse354States {
    POSITION_CONN_SYNAPSE354_L,
};

// position_conn_synapse354 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse354States state;
} PositionConnSynapse354;

// position_conn_synapse354 Initialisation function
void PositionConnSynapse354Init(PositionConnSynapse354* me);

// position_conn_synapse354 Execution function
void PositionConnSynapse354Run(PositionConnSynapse354* me);

#endif // POSITION_CONN_SYNAPSE354_H_