#ifndef POSITION_CONN_SYNAPSE129_H_
#define POSITION_CONN_SYNAPSE129_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse129 States
enum PositionConnSynapse129States {
    POSITION_CONN_SYNAPSE129_L,
};

// position_conn_synapse129 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse129States state;
} PositionConnSynapse129;

// position_conn_synapse129 Initialisation function
void PositionConnSynapse129Init(PositionConnSynapse129* me);

// position_conn_synapse129 Execution function
void PositionConnSynapse129Run(PositionConnSynapse129* me);

#endif // POSITION_CONN_SYNAPSE129_H_