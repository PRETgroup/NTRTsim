#ifndef POSITION_CONN_SYNAPSE45_H_
#define POSITION_CONN_SYNAPSE45_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse45 States
enum PositionConnSynapse45States {
    POSITION_CONN_SYNAPSE45_L,
};

// position_conn_synapse45 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse45States state;
} PositionConnSynapse45;

// position_conn_synapse45 Initialisation function
void PositionConnSynapse45Init(PositionConnSynapse45* me);

// position_conn_synapse45 Execution function
void PositionConnSynapse45Run(PositionConnSynapse45* me);

#endif // POSITION_CONN_SYNAPSE45_H_