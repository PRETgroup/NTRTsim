#ifndef POSITION_CONN_SYNAPSE332_H_
#define POSITION_CONN_SYNAPSE332_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse332 States
enum PositionConnSynapse332States {
    POSITION_CONN_SYNAPSE332_L,
};

// position_conn_synapse332 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse332States state;
} PositionConnSynapse332;

// position_conn_synapse332 Initialisation function
void PositionConnSynapse332Init(PositionConnSynapse332* me);

// position_conn_synapse332 Execution function
void PositionConnSynapse332Run(PositionConnSynapse332* me);

#endif // POSITION_CONN_SYNAPSE332_H_