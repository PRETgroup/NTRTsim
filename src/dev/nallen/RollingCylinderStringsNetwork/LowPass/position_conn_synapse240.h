#ifndef POSITION_CONN_SYNAPSE240_H_
#define POSITION_CONN_SYNAPSE240_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse240 States
enum PositionConnSynapse240States {
    POSITION_CONN_SYNAPSE240_L,
};

// position_conn_synapse240 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse240States state;
} PositionConnSynapse240;

// position_conn_synapse240 Initialisation function
void PositionConnSynapse240Init(PositionConnSynapse240* me);

// position_conn_synapse240 Execution function
void PositionConnSynapse240Run(PositionConnSynapse240* me);

#endif // POSITION_CONN_SYNAPSE240_H_