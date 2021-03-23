#ifndef POSITION_CONN_SYNAPSE213_H_
#define POSITION_CONN_SYNAPSE213_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse213 States
enum PositionConnSynapse213States {
    POSITION_CONN_SYNAPSE213_L,
};

// position_conn_synapse213 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse213States state;
} PositionConnSynapse213;

// position_conn_synapse213 Initialisation function
void PositionConnSynapse213Init(PositionConnSynapse213* me);

// position_conn_synapse213 Execution function
void PositionConnSynapse213Run(PositionConnSynapse213* me);

#endif // POSITION_CONN_SYNAPSE213_H_