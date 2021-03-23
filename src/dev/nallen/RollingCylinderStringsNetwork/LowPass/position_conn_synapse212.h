#ifndef POSITION_CONN_SYNAPSE212_H_
#define POSITION_CONN_SYNAPSE212_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse212 States
enum PositionConnSynapse212States {
    POSITION_CONN_SYNAPSE212_L,
};

// position_conn_synapse212 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse212States state;
} PositionConnSynapse212;

// position_conn_synapse212 Initialisation function
void PositionConnSynapse212Init(PositionConnSynapse212* me);

// position_conn_synapse212 Execution function
void PositionConnSynapse212Run(PositionConnSynapse212* me);

#endif // POSITION_CONN_SYNAPSE212_H_