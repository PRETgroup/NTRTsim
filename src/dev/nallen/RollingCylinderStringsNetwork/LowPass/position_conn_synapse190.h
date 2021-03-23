#ifndef POSITION_CONN_SYNAPSE190_H_
#define POSITION_CONN_SYNAPSE190_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse190 States
enum PositionConnSynapse190States {
    POSITION_CONN_SYNAPSE190_L,
};

// position_conn_synapse190 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse190States state;
} PositionConnSynapse190;

// position_conn_synapse190 Initialisation function
void PositionConnSynapse190Init(PositionConnSynapse190* me);

// position_conn_synapse190 Execution function
void PositionConnSynapse190Run(PositionConnSynapse190* me);

#endif // POSITION_CONN_SYNAPSE190_H_