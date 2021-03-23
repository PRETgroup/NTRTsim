#ifndef POSITION_CONN_SYNAPSE28_H_
#define POSITION_CONN_SYNAPSE28_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse28 States
enum PositionConnSynapse28States {
    POSITION_CONN_SYNAPSE28_L,
};

// position_conn_synapse28 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse28States state;
} PositionConnSynapse28;

// position_conn_synapse28 Initialisation function
void PositionConnSynapse28Init(PositionConnSynapse28* me);

// position_conn_synapse28 Execution function
void PositionConnSynapse28Run(PositionConnSynapse28* me);

#endif // POSITION_CONN_SYNAPSE28_H_