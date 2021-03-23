#ifndef POSITION_CONN_SYNAPSE15_H_
#define POSITION_CONN_SYNAPSE15_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse15 States
enum PositionConnSynapse15States {
    POSITION_CONN_SYNAPSE15_L,
};

// position_conn_synapse15 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse15States state;
} PositionConnSynapse15;

// position_conn_synapse15 Initialisation function
void PositionConnSynapse15Init(PositionConnSynapse15* me);

// position_conn_synapse15 Execution function
void PositionConnSynapse15Run(PositionConnSynapse15* me);

#endif // POSITION_CONN_SYNAPSE15_H_