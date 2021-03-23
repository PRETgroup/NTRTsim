#ifndef POSITION_CONN_SYNAPSE17_H_
#define POSITION_CONN_SYNAPSE17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse17 States
enum PositionConnSynapse17States {
    POSITION_CONN_SYNAPSE17_L,
};

// position_conn_synapse17 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse17States state;
} PositionConnSynapse17;

// position_conn_synapse17 Initialisation function
void PositionConnSynapse17Init(PositionConnSynapse17* me);

// position_conn_synapse17 Execution function
void PositionConnSynapse17Run(PositionConnSynapse17* me);

#endif // POSITION_CONN_SYNAPSE17_H_