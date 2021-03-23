#ifndef POSITION_CONN_SYNAPSE40_H_
#define POSITION_CONN_SYNAPSE40_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse40 States
enum PositionConnSynapse40States {
    POSITION_CONN_SYNAPSE40_L,
};

// position_conn_synapse40 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse40States state;
} PositionConnSynapse40;

// position_conn_synapse40 Initialisation function
void PositionConnSynapse40Init(PositionConnSynapse40* me);

// position_conn_synapse40 Execution function
void PositionConnSynapse40Run(PositionConnSynapse40* me);

#endif // POSITION_CONN_SYNAPSE40_H_