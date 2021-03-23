#ifndef POSITION_CONN_SYNAPSE162_H_
#define POSITION_CONN_SYNAPSE162_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse162 States
enum PositionConnSynapse162States {
    POSITION_CONN_SYNAPSE162_L,
};

// position_conn_synapse162 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse162States state;
} PositionConnSynapse162;

// position_conn_synapse162 Initialisation function
void PositionConnSynapse162Init(PositionConnSynapse162* me);

// position_conn_synapse162 Execution function
void PositionConnSynapse162Run(PositionConnSynapse162* me);

#endif // POSITION_CONN_SYNAPSE162_H_