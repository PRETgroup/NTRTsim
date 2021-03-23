#ifndef POSITION_CONN_SYNAPSE27_H_
#define POSITION_CONN_SYNAPSE27_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse27 States
enum PositionConnSynapse27States {
    POSITION_CONN_SYNAPSE27_L,
};

// position_conn_synapse27 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse27States state;
} PositionConnSynapse27;

// position_conn_synapse27 Initialisation function
void PositionConnSynapse27Init(PositionConnSynapse27* me);

// position_conn_synapse27 Execution function
void PositionConnSynapse27Run(PositionConnSynapse27* me);

#endif // POSITION_CONN_SYNAPSE27_H_