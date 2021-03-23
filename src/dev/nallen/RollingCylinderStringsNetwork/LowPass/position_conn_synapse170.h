#ifndef POSITION_CONN_SYNAPSE170_H_
#define POSITION_CONN_SYNAPSE170_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse170 States
enum PositionConnSynapse170States {
    POSITION_CONN_SYNAPSE170_L,
};

// position_conn_synapse170 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse170States state;
} PositionConnSynapse170;

// position_conn_synapse170 Initialisation function
void PositionConnSynapse170Init(PositionConnSynapse170* me);

// position_conn_synapse170 Execution function
void PositionConnSynapse170Run(PositionConnSynapse170* me);

#endif // POSITION_CONN_SYNAPSE170_H_