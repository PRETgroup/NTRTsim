#ifndef POSITION_CONN_SYNAPSE76_H_
#define POSITION_CONN_SYNAPSE76_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse76 States
enum PositionConnSynapse76States {
    POSITION_CONN_SYNAPSE76_L,
};

// position_conn_synapse76 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse76States state;
} PositionConnSynapse76;

// position_conn_synapse76 Initialisation function
void PositionConnSynapse76Init(PositionConnSynapse76* me);

// position_conn_synapse76 Execution function
void PositionConnSynapse76Run(PositionConnSynapse76* me);

#endif // POSITION_CONN_SYNAPSE76_H_