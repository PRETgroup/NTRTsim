#ifndef POSITION_CONN_SYNAPSE176_H_
#define POSITION_CONN_SYNAPSE176_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse176 States
enum PositionConnSynapse176States {
    POSITION_CONN_SYNAPSE176_L,
};

// position_conn_synapse176 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse176States state;
} PositionConnSynapse176;

// position_conn_synapse176 Initialisation function
void PositionConnSynapse176Init(PositionConnSynapse176* me);

// position_conn_synapse176 Execution function
void PositionConnSynapse176Run(PositionConnSynapse176* me);

#endif // POSITION_CONN_SYNAPSE176_H_