#ifndef POSITION_CONN_SYNAPSE182_H_
#define POSITION_CONN_SYNAPSE182_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse182 States
enum PositionConnSynapse182States {
    POSITION_CONN_SYNAPSE182_L,
};

// position_conn_synapse182 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse182States state;
} PositionConnSynapse182;

// position_conn_synapse182 Initialisation function
void PositionConnSynapse182Init(PositionConnSynapse182* me);

// position_conn_synapse182 Execution function
void PositionConnSynapse182Run(PositionConnSynapse182* me);

#endif // POSITION_CONN_SYNAPSE182_H_