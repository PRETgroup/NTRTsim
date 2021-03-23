#ifndef POSITION_CONN_SYNAPSE351_H_
#define POSITION_CONN_SYNAPSE351_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse351 States
enum PositionConnSynapse351States {
    POSITION_CONN_SYNAPSE351_L,
};

// position_conn_synapse351 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse351States state;
} PositionConnSynapse351;

// position_conn_synapse351 Initialisation function
void PositionConnSynapse351Init(PositionConnSynapse351* me);

// position_conn_synapse351 Execution function
void PositionConnSynapse351Run(PositionConnSynapse351* me);

#endif // POSITION_CONN_SYNAPSE351_H_