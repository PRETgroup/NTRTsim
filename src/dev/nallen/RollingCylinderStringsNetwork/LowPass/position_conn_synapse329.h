#ifndef POSITION_CONN_SYNAPSE329_H_
#define POSITION_CONN_SYNAPSE329_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse329 States
enum PositionConnSynapse329States {
    POSITION_CONN_SYNAPSE329_L,
};

// position_conn_synapse329 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse329States state;
} PositionConnSynapse329;

// position_conn_synapse329 Initialisation function
void PositionConnSynapse329Init(PositionConnSynapse329* me);

// position_conn_synapse329 Execution function
void PositionConnSynapse329Run(PositionConnSynapse329* me);

#endif // POSITION_CONN_SYNAPSE329_H_