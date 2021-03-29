#ifndef POSITION_CONN_SYNAPSE184_H_
#define POSITION_CONN_SYNAPSE184_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse184 States
enum PositionConnSynapse184States {
    POSITION_CONN_SYNAPSE184_L,
};

// position_conn_synapse184 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse184States state;
} PositionConnSynapse184;

// position_conn_synapse184 Initialisation function
void PositionConnSynapse184Init(PositionConnSynapse184* me);

// position_conn_synapse184 Execution function
void PositionConnSynapse184Run(PositionConnSynapse184* me);

#endif // POSITION_CONN_SYNAPSE184_H_