#ifndef POSITION_CONN_SYNAPSE59_H_
#define POSITION_CONN_SYNAPSE59_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse59 States
enum PositionConnSynapse59States {
    POSITION_CONN_SYNAPSE59_L,
};

// position_conn_synapse59 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse59States state;
} PositionConnSynapse59;

// position_conn_synapse59 Initialisation function
void PositionConnSynapse59Init(PositionConnSynapse59* me);

// position_conn_synapse59 Execution function
void PositionConnSynapse59Run(PositionConnSynapse59* me);

#endif // POSITION_CONN_SYNAPSE59_H_