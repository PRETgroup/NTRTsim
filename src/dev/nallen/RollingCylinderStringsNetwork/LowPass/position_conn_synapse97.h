#ifndef POSITION_CONN_SYNAPSE97_H_
#define POSITION_CONN_SYNAPSE97_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse97 States
enum PositionConnSynapse97States {
    POSITION_CONN_SYNAPSE97_L,
};

// position_conn_synapse97 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse97States state;
} PositionConnSynapse97;

// position_conn_synapse97 Initialisation function
void PositionConnSynapse97Init(PositionConnSynapse97* me);

// position_conn_synapse97 Execution function
void PositionConnSynapse97Run(PositionConnSynapse97* me);

#endif // POSITION_CONN_SYNAPSE97_H_