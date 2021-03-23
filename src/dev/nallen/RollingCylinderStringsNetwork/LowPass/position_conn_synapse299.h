#ifndef POSITION_CONN_SYNAPSE299_H_
#define POSITION_CONN_SYNAPSE299_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse299 States
enum PositionConnSynapse299States {
    POSITION_CONN_SYNAPSE299_L,
};

// position_conn_synapse299 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse299States state;
} PositionConnSynapse299;

// position_conn_synapse299 Initialisation function
void PositionConnSynapse299Init(PositionConnSynapse299* me);

// position_conn_synapse299 Execution function
void PositionConnSynapse299Run(PositionConnSynapse299* me);

#endif // POSITION_CONN_SYNAPSE299_H_