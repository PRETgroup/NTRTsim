#ifndef POSITION_CONN_SYNAPSE154_H_
#define POSITION_CONN_SYNAPSE154_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse154 States
enum PositionConnSynapse154States {
    POSITION_CONN_SYNAPSE154_L,
};

// position_conn_synapse154 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse154States state;
} PositionConnSynapse154;

// position_conn_synapse154 Initialisation function
void PositionConnSynapse154Init(PositionConnSynapse154* me);

// position_conn_synapse154 Execution function
void PositionConnSynapse154Run(PositionConnSynapse154* me);

#endif // POSITION_CONN_SYNAPSE154_H_