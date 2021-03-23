#ifndef POSITION_CONN_SYNAPSE257_H_
#define POSITION_CONN_SYNAPSE257_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse257 States
enum PositionConnSynapse257States {
    POSITION_CONN_SYNAPSE257_L,
};

// position_conn_synapse257 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse257States state;
} PositionConnSynapse257;

// position_conn_synapse257 Initialisation function
void PositionConnSynapse257Init(PositionConnSynapse257* me);

// position_conn_synapse257 Execution function
void PositionConnSynapse257Run(PositionConnSynapse257* me);

#endif // POSITION_CONN_SYNAPSE257_H_