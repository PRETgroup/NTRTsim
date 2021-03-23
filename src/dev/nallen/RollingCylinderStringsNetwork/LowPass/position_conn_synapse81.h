#ifndef POSITION_CONN_SYNAPSE81_H_
#define POSITION_CONN_SYNAPSE81_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse81 States
enum PositionConnSynapse81States {
    POSITION_CONN_SYNAPSE81_L,
};

// position_conn_synapse81 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse81States state;
} PositionConnSynapse81;

// position_conn_synapse81 Initialisation function
void PositionConnSynapse81Init(PositionConnSynapse81* me);

// position_conn_synapse81 Execution function
void PositionConnSynapse81Run(PositionConnSynapse81* me);

#endif // POSITION_CONN_SYNAPSE81_H_