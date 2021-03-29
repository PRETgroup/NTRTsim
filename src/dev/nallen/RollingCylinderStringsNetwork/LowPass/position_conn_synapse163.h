#ifndef POSITION_CONN_SYNAPSE163_H_
#define POSITION_CONN_SYNAPSE163_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse163 States
enum PositionConnSynapse163States {
    POSITION_CONN_SYNAPSE163_L,
};

// position_conn_synapse163 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse163States state;
} PositionConnSynapse163;

// position_conn_synapse163 Initialisation function
void PositionConnSynapse163Init(PositionConnSynapse163* me);

// position_conn_synapse163 Execution function
void PositionConnSynapse163Run(PositionConnSynapse163* me);

#endif // POSITION_CONN_SYNAPSE163_H_