#ifndef POSITION_CONN_SYNAPSE198_H_
#define POSITION_CONN_SYNAPSE198_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse198 States
enum PositionConnSynapse198States {
    POSITION_CONN_SYNAPSE198_L,
};

// position_conn_synapse198 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse198States state;
} PositionConnSynapse198;

// position_conn_synapse198 Initialisation function
void PositionConnSynapse198Init(PositionConnSynapse198* me);

// position_conn_synapse198 Execution function
void PositionConnSynapse198Run(PositionConnSynapse198* me);

#endif // POSITION_CONN_SYNAPSE198_H_