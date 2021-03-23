#ifndef POSITION_CONN_SYNAPSE2_H_
#define POSITION_CONN_SYNAPSE2_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse2 States
enum PositionConnSynapse2States {
    POSITION_CONN_SYNAPSE2_L,
};

// position_conn_synapse2 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse2States state;
} PositionConnSynapse2;

// position_conn_synapse2 Initialisation function
void PositionConnSynapse2Init(PositionConnSynapse2* me);

// position_conn_synapse2 Execution function
void PositionConnSynapse2Run(PositionConnSynapse2* me);

#endif // POSITION_CONN_SYNAPSE2_H_