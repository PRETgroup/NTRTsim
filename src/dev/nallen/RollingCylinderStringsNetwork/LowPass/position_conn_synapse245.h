#ifndef POSITION_CONN_SYNAPSE245_H_
#define POSITION_CONN_SYNAPSE245_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse245 States
enum PositionConnSynapse245States {
    POSITION_CONN_SYNAPSE245_L,
};

// position_conn_synapse245 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse245States state;
} PositionConnSynapse245;

// position_conn_synapse245 Initialisation function
void PositionConnSynapse245Init(PositionConnSynapse245* me);

// position_conn_synapse245 Execution function
void PositionConnSynapse245Run(PositionConnSynapse245* me);

#endif // POSITION_CONN_SYNAPSE245_H_