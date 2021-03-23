#ifndef POSITION_CONN_SYNAPSE46_H_
#define POSITION_CONN_SYNAPSE46_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse46 States
enum PositionConnSynapse46States {
    POSITION_CONN_SYNAPSE46_L,
};

// position_conn_synapse46 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse46States state;
} PositionConnSynapse46;

// position_conn_synapse46 Initialisation function
void PositionConnSynapse46Init(PositionConnSynapse46* me);

// position_conn_synapse46 Execution function
void PositionConnSynapse46Run(PositionConnSynapse46* me);

#endif // POSITION_CONN_SYNAPSE46_H_