#ifndef POSITION_CONN_SYNAPSE378_H_
#define POSITION_CONN_SYNAPSE378_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse378 States
enum PositionConnSynapse378States {
    POSITION_CONN_SYNAPSE378_L,
};

// position_conn_synapse378 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse378States state;
} PositionConnSynapse378;

// position_conn_synapse378 Initialisation function
void PositionConnSynapse378Init(PositionConnSynapse378* me);

// position_conn_synapse378 Execution function
void PositionConnSynapse378Run(PositionConnSynapse378* me);

#endif // POSITION_CONN_SYNAPSE378_H_