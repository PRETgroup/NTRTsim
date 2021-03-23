#ifndef POSITION_CONN_SYNAPSE75_H_
#define POSITION_CONN_SYNAPSE75_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse75 States
enum PositionConnSynapse75States {
    POSITION_CONN_SYNAPSE75_L,
};

// position_conn_synapse75 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse75States state;
} PositionConnSynapse75;

// position_conn_synapse75 Initialisation function
void PositionConnSynapse75Init(PositionConnSynapse75* me);

// position_conn_synapse75 Execution function
void PositionConnSynapse75Run(PositionConnSynapse75* me);

#endif // POSITION_CONN_SYNAPSE75_H_