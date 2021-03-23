#ifndef POSITION_CONN_SYNAPSE316_H_
#define POSITION_CONN_SYNAPSE316_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse316 States
enum PositionConnSynapse316States {
    POSITION_CONN_SYNAPSE316_L,
};

// position_conn_synapse316 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse316States state;
} PositionConnSynapse316;

// position_conn_synapse316 Initialisation function
void PositionConnSynapse316Init(PositionConnSynapse316* me);

// position_conn_synapse316 Execution function
void PositionConnSynapse316Run(PositionConnSynapse316* me);

#endif // POSITION_CONN_SYNAPSE316_H_