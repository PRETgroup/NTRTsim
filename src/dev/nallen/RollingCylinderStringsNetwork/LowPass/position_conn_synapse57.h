#ifndef POSITION_CONN_SYNAPSE57_H_
#define POSITION_CONN_SYNAPSE57_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse57 States
enum PositionConnSynapse57States {
    POSITION_CONN_SYNAPSE57_L,
};

// position_conn_synapse57 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse57States state;
} PositionConnSynapse57;

// position_conn_synapse57 Initialisation function
void PositionConnSynapse57Init(PositionConnSynapse57* me);

// position_conn_synapse57 Execution function
void PositionConnSynapse57Run(PositionConnSynapse57* me);

#endif // POSITION_CONN_SYNAPSE57_H_