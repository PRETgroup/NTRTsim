#ifndef POSITION_CONN_SYNAPSE94_H_
#define POSITION_CONN_SYNAPSE94_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse94 States
enum PositionConnSynapse94States {
    POSITION_CONN_SYNAPSE94_L,
};

// position_conn_synapse94 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse94States state;
} PositionConnSynapse94;

// position_conn_synapse94 Initialisation function
void PositionConnSynapse94Init(PositionConnSynapse94* me);

// position_conn_synapse94 Execution function
void PositionConnSynapse94Run(PositionConnSynapse94* me);

#endif // POSITION_CONN_SYNAPSE94_H_