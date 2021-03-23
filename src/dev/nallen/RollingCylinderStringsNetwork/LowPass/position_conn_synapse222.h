#ifndef POSITION_CONN_SYNAPSE222_H_
#define POSITION_CONN_SYNAPSE222_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse222 States
enum PositionConnSynapse222States {
    POSITION_CONN_SYNAPSE222_L,
};

// position_conn_synapse222 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse222States state;
} PositionConnSynapse222;

// position_conn_synapse222 Initialisation function
void PositionConnSynapse222Init(PositionConnSynapse222* me);

// position_conn_synapse222 Execution function
void PositionConnSynapse222Run(PositionConnSynapse222* me);

#endif // POSITION_CONN_SYNAPSE222_H_