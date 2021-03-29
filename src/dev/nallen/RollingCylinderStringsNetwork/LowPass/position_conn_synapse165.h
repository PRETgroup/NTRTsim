#ifndef POSITION_CONN_SYNAPSE165_H_
#define POSITION_CONN_SYNAPSE165_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse165 States
enum PositionConnSynapse165States {
    POSITION_CONN_SYNAPSE165_L,
};

// position_conn_synapse165 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse165States state;
} PositionConnSynapse165;

// position_conn_synapse165 Initialisation function
void PositionConnSynapse165Init(PositionConnSynapse165* me);

// position_conn_synapse165 Execution function
void PositionConnSynapse165Run(PositionConnSynapse165* me);

#endif // POSITION_CONN_SYNAPSE165_H_