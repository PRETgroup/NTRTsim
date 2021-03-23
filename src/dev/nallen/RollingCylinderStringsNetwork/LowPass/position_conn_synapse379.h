#ifndef POSITION_CONN_SYNAPSE379_H_
#define POSITION_CONN_SYNAPSE379_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse379 States
enum PositionConnSynapse379States {
    POSITION_CONN_SYNAPSE379_L,
};

// position_conn_synapse379 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse379States state;
} PositionConnSynapse379;

// position_conn_synapse379 Initialisation function
void PositionConnSynapse379Init(PositionConnSynapse379* me);

// position_conn_synapse379 Execution function
void PositionConnSynapse379Run(PositionConnSynapse379* me);

#endif // POSITION_CONN_SYNAPSE379_H_