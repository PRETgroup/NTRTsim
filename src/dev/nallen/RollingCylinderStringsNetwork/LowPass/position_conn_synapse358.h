#ifndef POSITION_CONN_SYNAPSE358_H_
#define POSITION_CONN_SYNAPSE358_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse358 States
enum PositionConnSynapse358States {
    POSITION_CONN_SYNAPSE358_L,
};

// position_conn_synapse358 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse358States state;
} PositionConnSynapse358;

// position_conn_synapse358 Initialisation function
void PositionConnSynapse358Init(PositionConnSynapse358* me);

// position_conn_synapse358 Execution function
void PositionConnSynapse358Run(PositionConnSynapse358* me);

#endif // POSITION_CONN_SYNAPSE358_H_