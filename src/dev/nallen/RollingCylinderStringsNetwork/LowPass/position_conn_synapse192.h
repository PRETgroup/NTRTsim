#ifndef POSITION_CONN_SYNAPSE192_H_
#define POSITION_CONN_SYNAPSE192_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse192 States
enum PositionConnSynapse192States {
    POSITION_CONN_SYNAPSE192_L,
};

// position_conn_synapse192 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse192States state;
} PositionConnSynapse192;

// position_conn_synapse192 Initialisation function
void PositionConnSynapse192Init(PositionConnSynapse192* me);

// position_conn_synapse192 Execution function
void PositionConnSynapse192Run(PositionConnSynapse192* me);

#endif // POSITION_CONN_SYNAPSE192_H_