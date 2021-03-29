#ifndef POSITION_CONN_SYNAPSE189_H_
#define POSITION_CONN_SYNAPSE189_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse189 States
enum PositionConnSynapse189States {
    POSITION_CONN_SYNAPSE189_L,
};

// position_conn_synapse189 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse189States state;
} PositionConnSynapse189;

// position_conn_synapse189 Initialisation function
void PositionConnSynapse189Init(PositionConnSynapse189* me);

// position_conn_synapse189 Execution function
void PositionConnSynapse189Run(PositionConnSynapse189* me);

#endif // POSITION_CONN_SYNAPSE189_H_