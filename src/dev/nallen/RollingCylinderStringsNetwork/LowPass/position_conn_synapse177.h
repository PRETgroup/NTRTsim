#ifndef POSITION_CONN_SYNAPSE177_H_
#define POSITION_CONN_SYNAPSE177_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse177 States
enum PositionConnSynapse177States {
    POSITION_CONN_SYNAPSE177_L,
};

// position_conn_synapse177 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse177States state;
} PositionConnSynapse177;

// position_conn_synapse177 Initialisation function
void PositionConnSynapse177Init(PositionConnSynapse177* me);

// position_conn_synapse177 Execution function
void PositionConnSynapse177Run(PositionConnSynapse177* me);

#endif // POSITION_CONN_SYNAPSE177_H_