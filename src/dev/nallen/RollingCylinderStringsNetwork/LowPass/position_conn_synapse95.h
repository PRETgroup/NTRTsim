#ifndef POSITION_CONN_SYNAPSE95_H_
#define POSITION_CONN_SYNAPSE95_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse95 States
enum PositionConnSynapse95States {
    POSITION_CONN_SYNAPSE95_L,
};

// position_conn_synapse95 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse95States state;
} PositionConnSynapse95;

// position_conn_synapse95 Initialisation function
void PositionConnSynapse95Init(PositionConnSynapse95* me);

// position_conn_synapse95 Execution function
void PositionConnSynapse95Run(PositionConnSynapse95* me);

#endif // POSITION_CONN_SYNAPSE95_H_