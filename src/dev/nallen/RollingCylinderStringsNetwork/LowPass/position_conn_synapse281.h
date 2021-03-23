#ifndef POSITION_CONN_SYNAPSE281_H_
#define POSITION_CONN_SYNAPSE281_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse281 States
enum PositionConnSynapse281States {
    POSITION_CONN_SYNAPSE281_L,
};

// position_conn_synapse281 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse281States state;
} PositionConnSynapse281;

// position_conn_synapse281 Initialisation function
void PositionConnSynapse281Init(PositionConnSynapse281* me);

// position_conn_synapse281 Execution function
void PositionConnSynapse281Run(PositionConnSynapse281* me);

#endif // POSITION_CONN_SYNAPSE281_H_