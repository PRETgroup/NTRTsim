#ifndef POSITION_CONN_SYNAPSE61_H_
#define POSITION_CONN_SYNAPSE61_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse61 States
enum PositionConnSynapse61States {
    POSITION_CONN_SYNAPSE61_L,
};

// position_conn_synapse61 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse61States state;
} PositionConnSynapse61;

// position_conn_synapse61 Initialisation function
void PositionConnSynapse61Init(PositionConnSynapse61* me);

// position_conn_synapse61 Execution function
void PositionConnSynapse61Run(PositionConnSynapse61* me);

#endif // POSITION_CONN_SYNAPSE61_H_