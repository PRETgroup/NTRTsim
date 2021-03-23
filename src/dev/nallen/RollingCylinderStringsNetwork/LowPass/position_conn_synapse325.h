#ifndef POSITION_CONN_SYNAPSE325_H_
#define POSITION_CONN_SYNAPSE325_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse325 States
enum PositionConnSynapse325States {
    POSITION_CONN_SYNAPSE325_L,
};

// position_conn_synapse325 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse325States state;
} PositionConnSynapse325;

// position_conn_synapse325 Initialisation function
void PositionConnSynapse325Init(PositionConnSynapse325* me);

// position_conn_synapse325 Execution function
void PositionConnSynapse325Run(PositionConnSynapse325* me);

#endif // POSITION_CONN_SYNAPSE325_H_