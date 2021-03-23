#ifndef POSITION_CONN_SYNAPSE231_H_
#define POSITION_CONN_SYNAPSE231_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse231 States
enum PositionConnSynapse231States {
    POSITION_CONN_SYNAPSE231_L,
};

// position_conn_synapse231 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse231States state;
} PositionConnSynapse231;

// position_conn_synapse231 Initialisation function
void PositionConnSynapse231Init(PositionConnSynapse231* me);

// position_conn_synapse231 Execution function
void PositionConnSynapse231Run(PositionConnSynapse231* me);

#endif // POSITION_CONN_SYNAPSE231_H_