#ifndef POSITION_CONN_SYNAPSE136_H_
#define POSITION_CONN_SYNAPSE136_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse136 States
enum PositionConnSynapse136States {
    POSITION_CONN_SYNAPSE136_L,
};

// position_conn_synapse136 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse136States state;
} PositionConnSynapse136;

// position_conn_synapse136 Initialisation function
void PositionConnSynapse136Init(PositionConnSynapse136* me);

// position_conn_synapse136 Execution function
void PositionConnSynapse136Run(PositionConnSynapse136* me);

#endif // POSITION_CONN_SYNAPSE136_H_