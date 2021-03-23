#ifndef POSITION_CONN_SYNAPSE268_H_
#define POSITION_CONN_SYNAPSE268_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse268 States
enum PositionConnSynapse268States {
    POSITION_CONN_SYNAPSE268_L,
};

// position_conn_synapse268 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse268States state;
} PositionConnSynapse268;

// position_conn_synapse268 Initialisation function
void PositionConnSynapse268Init(PositionConnSynapse268* me);

// position_conn_synapse268 Execution function
void PositionConnSynapse268Run(PositionConnSynapse268* me);

#endif // POSITION_CONN_SYNAPSE268_H_