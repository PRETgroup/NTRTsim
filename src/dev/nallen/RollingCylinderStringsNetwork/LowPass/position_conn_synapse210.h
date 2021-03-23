#ifndef POSITION_CONN_SYNAPSE210_H_
#define POSITION_CONN_SYNAPSE210_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse210 States
enum PositionConnSynapse210States {
    POSITION_CONN_SYNAPSE210_L,
};

// position_conn_synapse210 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse210States state;
} PositionConnSynapse210;

// position_conn_synapse210 Initialisation function
void PositionConnSynapse210Init(PositionConnSynapse210* me);

// position_conn_synapse210 Execution function
void PositionConnSynapse210Run(PositionConnSynapse210* me);

#endif // POSITION_CONN_SYNAPSE210_H_