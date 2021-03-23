#ifndef POSITION_CONN_SYNAPSE246_H_
#define POSITION_CONN_SYNAPSE246_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse246 States
enum PositionConnSynapse246States {
    POSITION_CONN_SYNAPSE246_L,
};

// position_conn_synapse246 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse246States state;
} PositionConnSynapse246;

// position_conn_synapse246 Initialisation function
void PositionConnSynapse246Init(PositionConnSynapse246* me);

// position_conn_synapse246 Execution function
void PositionConnSynapse246Run(PositionConnSynapse246* me);

#endif // POSITION_CONN_SYNAPSE246_H_