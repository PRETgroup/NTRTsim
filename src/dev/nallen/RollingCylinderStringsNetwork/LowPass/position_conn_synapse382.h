#ifndef POSITION_CONN_SYNAPSE382_H_
#define POSITION_CONN_SYNAPSE382_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse382 States
enum PositionConnSynapse382States {
    POSITION_CONN_SYNAPSE382_L,
};

// position_conn_synapse382 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse382States state;
} PositionConnSynapse382;

// position_conn_synapse382 Initialisation function
void PositionConnSynapse382Init(PositionConnSynapse382* me);

// position_conn_synapse382 Execution function
void PositionConnSynapse382Run(PositionConnSynapse382* me);

#endif // POSITION_CONN_SYNAPSE382_H_