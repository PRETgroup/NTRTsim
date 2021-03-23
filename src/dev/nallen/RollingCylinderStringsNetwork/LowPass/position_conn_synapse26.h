#ifndef POSITION_CONN_SYNAPSE26_H_
#define POSITION_CONN_SYNAPSE26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse26 States
enum PositionConnSynapse26States {
    POSITION_CONN_SYNAPSE26_L,
};

// position_conn_synapse26 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse26States state;
} PositionConnSynapse26;

// position_conn_synapse26 Initialisation function
void PositionConnSynapse26Init(PositionConnSynapse26* me);

// position_conn_synapse26 Execution function
void PositionConnSynapse26Run(PositionConnSynapse26* me);

#endif // POSITION_CONN_SYNAPSE26_H_