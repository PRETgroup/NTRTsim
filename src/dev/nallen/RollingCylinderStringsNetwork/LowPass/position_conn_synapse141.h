#ifndef POSITION_CONN_SYNAPSE141_H_
#define POSITION_CONN_SYNAPSE141_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse141 States
enum PositionConnSynapse141States {
    POSITION_CONN_SYNAPSE141_L,
};

// position_conn_synapse141 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse141States state;
} PositionConnSynapse141;

// position_conn_synapse141 Initialisation function
void PositionConnSynapse141Init(PositionConnSynapse141* me);

// position_conn_synapse141 Execution function
void PositionConnSynapse141Run(PositionConnSynapse141* me);

#endif // POSITION_CONN_SYNAPSE141_H_