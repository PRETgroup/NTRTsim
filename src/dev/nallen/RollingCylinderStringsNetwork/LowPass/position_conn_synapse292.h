#ifndef POSITION_CONN_SYNAPSE292_H_
#define POSITION_CONN_SYNAPSE292_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse292 States
enum PositionConnSynapse292States {
    POSITION_CONN_SYNAPSE292_L,
};

// position_conn_synapse292 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse292States state;
} PositionConnSynapse292;

// position_conn_synapse292 Initialisation function
void PositionConnSynapse292Init(PositionConnSynapse292* me);

// position_conn_synapse292 Execution function
void PositionConnSynapse292Run(PositionConnSynapse292* me);

#endif // POSITION_CONN_SYNAPSE292_H_