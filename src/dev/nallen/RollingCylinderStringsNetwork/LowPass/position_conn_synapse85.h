#ifndef POSITION_CONN_SYNAPSE85_H_
#define POSITION_CONN_SYNAPSE85_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse85 States
enum PositionConnSynapse85States {
    POSITION_CONN_SYNAPSE85_L,
};

// position_conn_synapse85 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse85States state;
} PositionConnSynapse85;

// position_conn_synapse85 Initialisation function
void PositionConnSynapse85Init(PositionConnSynapse85* me);

// position_conn_synapse85 Execution function
void PositionConnSynapse85Run(PositionConnSynapse85* me);

#endif // POSITION_CONN_SYNAPSE85_H_