#ifndef POSITION_CONN_SYNAPSE356_H_
#define POSITION_CONN_SYNAPSE356_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse356 States
enum PositionConnSynapse356States {
    POSITION_CONN_SYNAPSE356_L,
};

// position_conn_synapse356 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse356States state;
} PositionConnSynapse356;

// position_conn_synapse356 Initialisation function
void PositionConnSynapse356Init(PositionConnSynapse356* me);

// position_conn_synapse356 Execution function
void PositionConnSynapse356Run(PositionConnSynapse356* me);

#endif // POSITION_CONN_SYNAPSE356_H_