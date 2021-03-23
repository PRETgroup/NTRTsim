#ifndef POSITION_CONN_SYNAPSE368_H_
#define POSITION_CONN_SYNAPSE368_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse368 States
enum PositionConnSynapse368States {
    POSITION_CONN_SYNAPSE368_L,
};

// position_conn_synapse368 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse368States state;
} PositionConnSynapse368;

// position_conn_synapse368 Initialisation function
void PositionConnSynapse368Init(PositionConnSynapse368* me);

// position_conn_synapse368 Execution function
void PositionConnSynapse368Run(PositionConnSynapse368* me);

#endif // POSITION_CONN_SYNAPSE368_H_