#ifndef POSITION_CONN_SYNAPSE263_H_
#define POSITION_CONN_SYNAPSE263_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse263 States
enum PositionConnSynapse263States {
    POSITION_CONN_SYNAPSE263_L,
};

// position_conn_synapse263 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse263States state;
} PositionConnSynapse263;

// position_conn_synapse263 Initialisation function
void PositionConnSynapse263Init(PositionConnSynapse263* me);

// position_conn_synapse263 Execution function
void PositionConnSynapse263Run(PositionConnSynapse263* me);

#endif // POSITION_CONN_SYNAPSE263_H_