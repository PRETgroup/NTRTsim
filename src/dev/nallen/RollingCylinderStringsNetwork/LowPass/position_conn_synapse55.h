#ifndef POSITION_CONN_SYNAPSE55_H_
#define POSITION_CONN_SYNAPSE55_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse55 States
enum PositionConnSynapse55States {
    POSITION_CONN_SYNAPSE55_L,
};

// position_conn_synapse55 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse55States state;
} PositionConnSynapse55;

// position_conn_synapse55 Initialisation function
void PositionConnSynapse55Init(PositionConnSynapse55* me);

// position_conn_synapse55 Execution function
void PositionConnSynapse55Run(PositionConnSynapse55* me);

#endif // POSITION_CONN_SYNAPSE55_H_