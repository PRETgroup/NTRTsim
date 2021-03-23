#ifndef POSITION_CONN_SYNAPSE3_H_
#define POSITION_CONN_SYNAPSE3_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse3 States
enum PositionConnSynapse3States {
    POSITION_CONN_SYNAPSE3_L,
};

// position_conn_synapse3 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse3States state;
} PositionConnSynapse3;

// position_conn_synapse3 Initialisation function
void PositionConnSynapse3Init(PositionConnSynapse3* me);

// position_conn_synapse3 Execution function
void PositionConnSynapse3Run(PositionConnSynapse3* me);

#endif // POSITION_CONN_SYNAPSE3_H_