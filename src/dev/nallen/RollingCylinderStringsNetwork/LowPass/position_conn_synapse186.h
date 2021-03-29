#ifndef POSITION_CONN_SYNAPSE186_H_
#define POSITION_CONN_SYNAPSE186_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse186 States
enum PositionConnSynapse186States {
    POSITION_CONN_SYNAPSE186_L,
};

// position_conn_synapse186 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse186States state;
} PositionConnSynapse186;

// position_conn_synapse186 Initialisation function
void PositionConnSynapse186Init(PositionConnSynapse186* me);

// position_conn_synapse186 Execution function
void PositionConnSynapse186Run(PositionConnSynapse186* me);

#endif // POSITION_CONN_SYNAPSE186_H_