#ifndef POSITION_CONN_SYNAPSE369_H_
#define POSITION_CONN_SYNAPSE369_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse369 States
enum PositionConnSynapse369States {
    POSITION_CONN_SYNAPSE369_L,
};

// position_conn_synapse369 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse369States state;
} PositionConnSynapse369;

// position_conn_synapse369 Initialisation function
void PositionConnSynapse369Init(PositionConnSynapse369* me);

// position_conn_synapse369 Execution function
void PositionConnSynapse369Run(PositionConnSynapse369* me);

#endif // POSITION_CONN_SYNAPSE369_H_