#ifndef POSITION_CONN_SYNAPSE230_H_
#define POSITION_CONN_SYNAPSE230_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse230 States
enum PositionConnSynapse230States {
    POSITION_CONN_SYNAPSE230_L,
};

// position_conn_synapse230 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse230States state;
} PositionConnSynapse230;

// position_conn_synapse230 Initialisation function
void PositionConnSynapse230Init(PositionConnSynapse230* me);

// position_conn_synapse230 Execution function
void PositionConnSynapse230Run(PositionConnSynapse230* me);

#endif // POSITION_CONN_SYNAPSE230_H_