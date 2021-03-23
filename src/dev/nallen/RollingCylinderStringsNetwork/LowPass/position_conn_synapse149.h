#ifndef POSITION_CONN_SYNAPSE149_H_
#define POSITION_CONN_SYNAPSE149_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse149 States
enum PositionConnSynapse149States {
    POSITION_CONN_SYNAPSE149_L,
};

// position_conn_synapse149 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse149States state;
} PositionConnSynapse149;

// position_conn_synapse149 Initialisation function
void PositionConnSynapse149Init(PositionConnSynapse149* me);

// position_conn_synapse149 Execution function
void PositionConnSynapse149Run(PositionConnSynapse149* me);

#endif // POSITION_CONN_SYNAPSE149_H_