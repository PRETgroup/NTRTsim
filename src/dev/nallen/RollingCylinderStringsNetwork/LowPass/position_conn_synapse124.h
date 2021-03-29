#ifndef POSITION_CONN_SYNAPSE124_H_
#define POSITION_CONN_SYNAPSE124_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse124 States
enum PositionConnSynapse124States {
    POSITION_CONN_SYNAPSE124_L,
};

// position_conn_synapse124 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse124States state;
} PositionConnSynapse124;

// position_conn_synapse124 Initialisation function
void PositionConnSynapse124Init(PositionConnSynapse124* me);

// position_conn_synapse124 Execution function
void PositionConnSynapse124Run(PositionConnSynapse124* me);

#endif // POSITION_CONN_SYNAPSE124_H_