#ifndef POSITION_CONN_SYNAPSE42_H_
#define POSITION_CONN_SYNAPSE42_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse42 States
enum PositionConnSynapse42States {
    POSITION_CONN_SYNAPSE42_L,
};

// position_conn_synapse42 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse42States state;
} PositionConnSynapse42;

// position_conn_synapse42 Initialisation function
void PositionConnSynapse42Init(PositionConnSynapse42* me);

// position_conn_synapse42 Execution function
void PositionConnSynapse42Run(PositionConnSynapse42* me);

#endif // POSITION_CONN_SYNAPSE42_H_