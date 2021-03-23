#ifndef POSITION_CONN_SYNAPSE258_H_
#define POSITION_CONN_SYNAPSE258_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse258 States
enum PositionConnSynapse258States {
    POSITION_CONN_SYNAPSE258_L,
};

// position_conn_synapse258 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse258States state;
} PositionConnSynapse258;

// position_conn_synapse258 Initialisation function
void PositionConnSynapse258Init(PositionConnSynapse258* me);

// position_conn_synapse258 Execution function
void PositionConnSynapse258Run(PositionConnSynapse258* me);

#endif // POSITION_CONN_SYNAPSE258_H_