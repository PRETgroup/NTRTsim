#ifndef POSITION_CONN_SYNAPSE239_H_
#define POSITION_CONN_SYNAPSE239_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse239 States
enum PositionConnSynapse239States {
    POSITION_CONN_SYNAPSE239_L,
};

// position_conn_synapse239 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse239States state;
} PositionConnSynapse239;

// position_conn_synapse239 Initialisation function
void PositionConnSynapse239Init(PositionConnSynapse239* me);

// position_conn_synapse239 Execution function
void PositionConnSynapse239Run(PositionConnSynapse239* me);

#endif // POSITION_CONN_SYNAPSE239_H_