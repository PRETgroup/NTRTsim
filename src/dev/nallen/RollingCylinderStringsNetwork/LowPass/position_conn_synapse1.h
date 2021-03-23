#ifndef POSITION_CONN_SYNAPSE1_H_
#define POSITION_CONN_SYNAPSE1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse1 States
enum PositionConnSynapse1States {
    POSITION_CONN_SYNAPSE1_L,
};

// position_conn_synapse1 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse1States state;
} PositionConnSynapse1;

// position_conn_synapse1 Initialisation function
void PositionConnSynapse1Init(PositionConnSynapse1* me);

// position_conn_synapse1 Execution function
void PositionConnSynapse1Run(PositionConnSynapse1* me);

#endif // POSITION_CONN_SYNAPSE1_H_