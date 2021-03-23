#ifndef POSITION_CONN_SYNAPSE60_H_
#define POSITION_CONN_SYNAPSE60_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse60 States
enum PositionConnSynapse60States {
    POSITION_CONN_SYNAPSE60_L,
};

// position_conn_synapse60 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse60States state;
} PositionConnSynapse60;

// position_conn_synapse60 Initialisation function
void PositionConnSynapse60Init(PositionConnSynapse60* me);

// position_conn_synapse60 Execution function
void PositionConnSynapse60Run(PositionConnSynapse60* me);

#endif // POSITION_CONN_SYNAPSE60_H_