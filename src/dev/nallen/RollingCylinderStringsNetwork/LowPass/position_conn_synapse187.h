#ifndef POSITION_CONN_SYNAPSE187_H_
#define POSITION_CONN_SYNAPSE187_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse187 States
enum PositionConnSynapse187States {
    POSITION_CONN_SYNAPSE187_L,
};

// position_conn_synapse187 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse187States state;
} PositionConnSynapse187;

// position_conn_synapse187 Initialisation function
void PositionConnSynapse187Init(PositionConnSynapse187* me);

// position_conn_synapse187 Execution function
void PositionConnSynapse187Run(PositionConnSynapse187* me);

#endif // POSITION_CONN_SYNAPSE187_H_