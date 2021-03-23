#ifndef POSITION_CONN_SYNAPSE334_H_
#define POSITION_CONN_SYNAPSE334_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse334 States
enum PositionConnSynapse334States {
    POSITION_CONN_SYNAPSE334_L,
};

// position_conn_synapse334 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse334States state;
} PositionConnSynapse334;

// position_conn_synapse334 Initialisation function
void PositionConnSynapse334Init(PositionConnSynapse334* me);

// position_conn_synapse334 Execution function
void PositionConnSynapse334Run(PositionConnSynapse334* me);

#endif // POSITION_CONN_SYNAPSE334_H_