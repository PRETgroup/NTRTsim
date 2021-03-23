#ifndef POSITION_CONN_SYNAPSE319_H_
#define POSITION_CONN_SYNAPSE319_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse319 States
enum PositionConnSynapse319States {
    POSITION_CONN_SYNAPSE319_L,
};

// position_conn_synapse319 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse319States state;
} PositionConnSynapse319;

// position_conn_synapse319 Initialisation function
void PositionConnSynapse319Init(PositionConnSynapse319* me);

// position_conn_synapse319 Execution function
void PositionConnSynapse319Run(PositionConnSynapse319* me);

#endif // POSITION_CONN_SYNAPSE319_H_