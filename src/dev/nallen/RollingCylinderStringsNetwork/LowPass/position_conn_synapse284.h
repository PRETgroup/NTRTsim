#ifndef POSITION_CONN_SYNAPSE284_H_
#define POSITION_CONN_SYNAPSE284_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse284 States
enum PositionConnSynapse284States {
    POSITION_CONN_SYNAPSE284_L,
};

// position_conn_synapse284 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse284States state;
} PositionConnSynapse284;

// position_conn_synapse284 Initialisation function
void PositionConnSynapse284Init(PositionConnSynapse284* me);

// position_conn_synapse284 Execution function
void PositionConnSynapse284Run(PositionConnSynapse284* me);

#endif // POSITION_CONN_SYNAPSE284_H_