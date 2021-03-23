#ifndef POSITION_CONN_SYNAPSE203_H_
#define POSITION_CONN_SYNAPSE203_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse203 States
enum PositionConnSynapse203States {
    POSITION_CONN_SYNAPSE203_L,
};

// position_conn_synapse203 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse203States state;
} PositionConnSynapse203;

// position_conn_synapse203 Initialisation function
void PositionConnSynapse203Init(PositionConnSynapse203* me);

// position_conn_synapse203 Execution function
void PositionConnSynapse203Run(PositionConnSynapse203* me);

#endif // POSITION_CONN_SYNAPSE203_H_