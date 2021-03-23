#ifndef POSITION_CONN_SYNAPSE10_H_
#define POSITION_CONN_SYNAPSE10_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse10 States
enum PositionConnSynapse10States {
    POSITION_CONN_SYNAPSE10_L,
};

// position_conn_synapse10 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse10States state;
} PositionConnSynapse10;

// position_conn_synapse10 Initialisation function
void PositionConnSynapse10Init(PositionConnSynapse10* me);

// position_conn_synapse10 Execution function
void PositionConnSynapse10Run(PositionConnSynapse10* me);

#endif // POSITION_CONN_SYNAPSE10_H_