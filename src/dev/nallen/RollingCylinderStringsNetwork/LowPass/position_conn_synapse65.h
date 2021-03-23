#ifndef POSITION_CONN_SYNAPSE65_H_
#define POSITION_CONN_SYNAPSE65_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse65 States
enum PositionConnSynapse65States {
    POSITION_CONN_SYNAPSE65_L,
};

// position_conn_synapse65 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse65States state;
} PositionConnSynapse65;

// position_conn_synapse65 Initialisation function
void PositionConnSynapse65Init(PositionConnSynapse65* me);

// position_conn_synapse65 Execution function
void PositionConnSynapse65Run(PositionConnSynapse65* me);

#endif // POSITION_CONN_SYNAPSE65_H_