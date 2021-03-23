#ifndef POSITION_CONN_SYNAPSE71_H_
#define POSITION_CONN_SYNAPSE71_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse71 States
enum PositionConnSynapse71States {
    POSITION_CONN_SYNAPSE71_L,
};

// position_conn_synapse71 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse71States state;
} PositionConnSynapse71;

// position_conn_synapse71 Initialisation function
void PositionConnSynapse71Init(PositionConnSynapse71* me);

// position_conn_synapse71 Execution function
void PositionConnSynapse71Run(PositionConnSynapse71* me);

#endif // POSITION_CONN_SYNAPSE71_H_