#ifndef POSITION_CONN_SYNAPSE142_H_
#define POSITION_CONN_SYNAPSE142_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse142 States
enum PositionConnSynapse142States {
    POSITION_CONN_SYNAPSE142_L,
};

// position_conn_synapse142 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse142States state;
} PositionConnSynapse142;

// position_conn_synapse142 Initialisation function
void PositionConnSynapse142Init(PositionConnSynapse142* me);

// position_conn_synapse142 Execution function
void PositionConnSynapse142Run(PositionConnSynapse142* me);

#endif // POSITION_CONN_SYNAPSE142_H_