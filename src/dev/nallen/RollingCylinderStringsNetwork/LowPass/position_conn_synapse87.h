#ifndef POSITION_CONN_SYNAPSE87_H_
#define POSITION_CONN_SYNAPSE87_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse87 States
enum PositionConnSynapse87States {
    POSITION_CONN_SYNAPSE87_L,
};

// position_conn_synapse87 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse87States state;
} PositionConnSynapse87;

// position_conn_synapse87 Initialisation function
void PositionConnSynapse87Init(PositionConnSynapse87* me);

// position_conn_synapse87 Execution function
void PositionConnSynapse87Run(PositionConnSynapse87* me);

#endif // POSITION_CONN_SYNAPSE87_H_