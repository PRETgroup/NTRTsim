#ifndef POSITION_CONN_SYNAPSE387_H_
#define POSITION_CONN_SYNAPSE387_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse387 States
enum PositionConnSynapse387States {
    POSITION_CONN_SYNAPSE387_L,
};

// position_conn_synapse387 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse387States state;
} PositionConnSynapse387;

// position_conn_synapse387 Initialisation function
void PositionConnSynapse387Init(PositionConnSynapse387* me);

// position_conn_synapse387 Execution function
void PositionConnSynapse387Run(PositionConnSynapse387* me);

#endif // POSITION_CONN_SYNAPSE387_H_