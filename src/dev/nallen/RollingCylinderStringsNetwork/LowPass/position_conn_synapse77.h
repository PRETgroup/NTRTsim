#ifndef POSITION_CONN_SYNAPSE77_H_
#define POSITION_CONN_SYNAPSE77_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse77 States
enum PositionConnSynapse77States {
    POSITION_CONN_SYNAPSE77_L,
};

// position_conn_synapse77 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse77States state;
} PositionConnSynapse77;

// position_conn_synapse77 Initialisation function
void PositionConnSynapse77Init(PositionConnSynapse77* me);

// position_conn_synapse77 Execution function
void PositionConnSynapse77Run(PositionConnSynapse77* me);

#endif // POSITION_CONN_SYNAPSE77_H_