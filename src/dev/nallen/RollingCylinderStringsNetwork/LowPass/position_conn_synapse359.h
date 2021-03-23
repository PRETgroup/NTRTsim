#ifndef POSITION_CONN_SYNAPSE359_H_
#define POSITION_CONN_SYNAPSE359_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse359 States
enum PositionConnSynapse359States {
    POSITION_CONN_SYNAPSE359_L,
};

// position_conn_synapse359 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse359States state;
} PositionConnSynapse359;

// position_conn_synapse359 Initialisation function
void PositionConnSynapse359Init(PositionConnSynapse359* me);

// position_conn_synapse359 Execution function
void PositionConnSynapse359Run(PositionConnSynapse359* me);

#endif // POSITION_CONN_SYNAPSE359_H_