#ifndef POSITION_CONN_SYNAPSE158_H_
#define POSITION_CONN_SYNAPSE158_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse158 States
enum PositionConnSynapse158States {
    POSITION_CONN_SYNAPSE158_L,
};

// position_conn_synapse158 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse158States state;
} PositionConnSynapse158;

// position_conn_synapse158 Initialisation function
void PositionConnSynapse158Init(PositionConnSynapse158* me);

// position_conn_synapse158 Execution function
void PositionConnSynapse158Run(PositionConnSynapse158* me);

#endif // POSITION_CONN_SYNAPSE158_H_