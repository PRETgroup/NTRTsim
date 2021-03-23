#ifndef POSITION_CONN_SYNAPSE58_H_
#define POSITION_CONN_SYNAPSE58_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse58 States
enum PositionConnSynapse58States {
    POSITION_CONN_SYNAPSE58_L,
};

// position_conn_synapse58 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse58States state;
} PositionConnSynapse58;

// position_conn_synapse58 Initialisation function
void PositionConnSynapse58Init(PositionConnSynapse58* me);

// position_conn_synapse58 Execution function
void PositionConnSynapse58Run(PositionConnSynapse58* me);

#endif // POSITION_CONN_SYNAPSE58_H_