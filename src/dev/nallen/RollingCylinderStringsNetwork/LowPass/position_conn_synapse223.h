#ifndef POSITION_CONN_SYNAPSE223_H_
#define POSITION_CONN_SYNAPSE223_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse223 States
enum PositionConnSynapse223States {
    POSITION_CONN_SYNAPSE223_L,
};

// position_conn_synapse223 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse223States state;
} PositionConnSynapse223;

// position_conn_synapse223 Initialisation function
void PositionConnSynapse223Init(PositionConnSynapse223* me);

// position_conn_synapse223 Execution function
void PositionConnSynapse223Run(PositionConnSynapse223* me);

#endif // POSITION_CONN_SYNAPSE223_H_