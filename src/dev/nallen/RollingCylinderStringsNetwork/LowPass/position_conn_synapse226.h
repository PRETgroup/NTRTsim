#ifndef POSITION_CONN_SYNAPSE226_H_
#define POSITION_CONN_SYNAPSE226_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse226 States
enum PositionConnSynapse226States {
    POSITION_CONN_SYNAPSE226_L,
};

// position_conn_synapse226 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse226States state;
} PositionConnSynapse226;

// position_conn_synapse226 Initialisation function
void PositionConnSynapse226Init(PositionConnSynapse226* me);

// position_conn_synapse226 Execution function
void PositionConnSynapse226Run(PositionConnSynapse226* me);

#endif // POSITION_CONN_SYNAPSE226_H_