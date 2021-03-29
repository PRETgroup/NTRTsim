#ifndef POSITION_CONN_SYNAPSE143_H_
#define POSITION_CONN_SYNAPSE143_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse143 States
enum PositionConnSynapse143States {
    POSITION_CONN_SYNAPSE143_L,
};

// position_conn_synapse143 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse143States state;
} PositionConnSynapse143;

// position_conn_synapse143 Initialisation function
void PositionConnSynapse143Init(PositionConnSynapse143* me);

// position_conn_synapse143 Execution function
void PositionConnSynapse143Run(PositionConnSynapse143* me);

#endif // POSITION_CONN_SYNAPSE143_H_