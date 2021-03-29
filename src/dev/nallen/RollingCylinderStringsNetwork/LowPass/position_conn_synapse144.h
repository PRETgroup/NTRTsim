#ifndef POSITION_CONN_SYNAPSE144_H_
#define POSITION_CONN_SYNAPSE144_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse144 States
enum PositionConnSynapse144States {
    POSITION_CONN_SYNAPSE144_L,
};

// position_conn_synapse144 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse144States state;
} PositionConnSynapse144;

// position_conn_synapse144 Initialisation function
void PositionConnSynapse144Init(PositionConnSynapse144* me);

// position_conn_synapse144 Execution function
void PositionConnSynapse144Run(PositionConnSynapse144* me);

#endif // POSITION_CONN_SYNAPSE144_H_