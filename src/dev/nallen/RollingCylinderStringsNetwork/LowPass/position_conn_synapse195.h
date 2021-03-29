#ifndef POSITION_CONN_SYNAPSE195_H_
#define POSITION_CONN_SYNAPSE195_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse195 States
enum PositionConnSynapse195States {
    POSITION_CONN_SYNAPSE195_L,
};

// position_conn_synapse195 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse195States state;
} PositionConnSynapse195;

// position_conn_synapse195 Initialisation function
void PositionConnSynapse195Init(PositionConnSynapse195* me);

// position_conn_synapse195 Execution function
void PositionConnSynapse195Run(PositionConnSynapse195* me);

#endif // POSITION_CONN_SYNAPSE195_H_