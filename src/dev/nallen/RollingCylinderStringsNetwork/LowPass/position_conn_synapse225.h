#ifndef POSITION_CONN_SYNAPSE225_H_
#define POSITION_CONN_SYNAPSE225_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse225 States
enum PositionConnSynapse225States {
    POSITION_CONN_SYNAPSE225_L,
};

// position_conn_synapse225 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse225States state;
} PositionConnSynapse225;

// position_conn_synapse225 Initialisation function
void PositionConnSynapse225Init(PositionConnSynapse225* me);

// position_conn_synapse225 Execution function
void PositionConnSynapse225Run(PositionConnSynapse225* me);

#endif // POSITION_CONN_SYNAPSE225_H_