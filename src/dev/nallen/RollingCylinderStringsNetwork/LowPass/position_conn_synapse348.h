#ifndef POSITION_CONN_SYNAPSE348_H_
#define POSITION_CONN_SYNAPSE348_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse348 States
enum PositionConnSynapse348States {
    POSITION_CONN_SYNAPSE348_L,
};

// position_conn_synapse348 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse348States state;
} PositionConnSynapse348;

// position_conn_synapse348 Initialisation function
void PositionConnSynapse348Init(PositionConnSynapse348* me);

// position_conn_synapse348 Execution function
void PositionConnSynapse348Run(PositionConnSynapse348* me);

#endif // POSITION_CONN_SYNAPSE348_H_