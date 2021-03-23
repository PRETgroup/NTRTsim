#ifndef POSITION_CONN_SYNAPSE209_H_
#define POSITION_CONN_SYNAPSE209_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse209 States
enum PositionConnSynapse209States {
    POSITION_CONN_SYNAPSE209_L,
};

// position_conn_synapse209 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse209States state;
} PositionConnSynapse209;

// position_conn_synapse209 Initialisation function
void PositionConnSynapse209Init(PositionConnSynapse209* me);

// position_conn_synapse209 Execution function
void PositionConnSynapse209Run(PositionConnSynapse209* me);

#endif // POSITION_CONN_SYNAPSE209_H_