#ifndef POSITION_CONN_SYNAPSE29_H_
#define POSITION_CONN_SYNAPSE29_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse29 States
enum PositionConnSynapse29States {
    POSITION_CONN_SYNAPSE29_L,
};

// position_conn_synapse29 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse29States state;
} PositionConnSynapse29;

// position_conn_synapse29 Initialisation function
void PositionConnSynapse29Init(PositionConnSynapse29* me);

// position_conn_synapse29 Execution function
void PositionConnSynapse29Run(PositionConnSynapse29* me);

#endif // POSITION_CONN_SYNAPSE29_H_