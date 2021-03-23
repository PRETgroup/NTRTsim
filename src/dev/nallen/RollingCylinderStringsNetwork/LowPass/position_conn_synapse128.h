#ifndef POSITION_CONN_SYNAPSE128_H_
#define POSITION_CONN_SYNAPSE128_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse128 States
enum PositionConnSynapse128States {
    POSITION_CONN_SYNAPSE128_L,
};

// position_conn_synapse128 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse128States state;
} PositionConnSynapse128;

// position_conn_synapse128 Initialisation function
void PositionConnSynapse128Init(PositionConnSynapse128* me);

// position_conn_synapse128 Execution function
void PositionConnSynapse128Run(PositionConnSynapse128* me);

#endif // POSITION_CONN_SYNAPSE128_H_