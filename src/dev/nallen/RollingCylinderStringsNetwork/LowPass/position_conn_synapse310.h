#ifndef POSITION_CONN_SYNAPSE310_H_
#define POSITION_CONN_SYNAPSE310_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse310 States
enum PositionConnSynapse310States {
    POSITION_CONN_SYNAPSE310_L,
};

// position_conn_synapse310 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse310States state;
} PositionConnSynapse310;

// position_conn_synapse310 Initialisation function
void PositionConnSynapse310Init(PositionConnSynapse310* me);

// position_conn_synapse310 Execution function
void PositionConnSynapse310Run(PositionConnSynapse310* me);

#endif // POSITION_CONN_SYNAPSE310_H_