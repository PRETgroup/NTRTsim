#ifndef POSITION_CONN_SYNAPSE145_H_
#define POSITION_CONN_SYNAPSE145_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse145 States
enum PositionConnSynapse145States {
    POSITION_CONN_SYNAPSE145_L,
};

// position_conn_synapse145 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse145States state;
} PositionConnSynapse145;

// position_conn_synapse145 Initialisation function
void PositionConnSynapse145Init(PositionConnSynapse145* me);

// position_conn_synapse145 Execution function
void PositionConnSynapse145Run(PositionConnSynapse145* me);

#endif // POSITION_CONN_SYNAPSE145_H_