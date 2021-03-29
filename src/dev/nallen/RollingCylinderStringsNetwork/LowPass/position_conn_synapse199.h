#ifndef POSITION_CONN_SYNAPSE199_H_
#define POSITION_CONN_SYNAPSE199_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse199 States
enum PositionConnSynapse199States {
    POSITION_CONN_SYNAPSE199_L,
};

// position_conn_synapse199 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse199States state;
} PositionConnSynapse199;

// position_conn_synapse199 Initialisation function
void PositionConnSynapse199Init(PositionConnSynapse199* me);

// position_conn_synapse199 Execution function
void PositionConnSynapse199Run(PositionConnSynapse199* me);

#endif // POSITION_CONN_SYNAPSE199_H_