#ifndef POSITION_CONN_SYNAPSE132_H_
#define POSITION_CONN_SYNAPSE132_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse132 States
enum PositionConnSynapse132States {
    POSITION_CONN_SYNAPSE132_L,
};

// position_conn_synapse132 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse132States state;
} PositionConnSynapse132;

// position_conn_synapse132 Initialisation function
void PositionConnSynapse132Init(PositionConnSynapse132* me);

// position_conn_synapse132 Execution function
void PositionConnSynapse132Run(PositionConnSynapse132* me);

#endif // POSITION_CONN_SYNAPSE132_H_