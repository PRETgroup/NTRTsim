#ifndef POSITION_CONN_SYNAPSE367_H_
#define POSITION_CONN_SYNAPSE367_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse367 States
enum PositionConnSynapse367States {
    POSITION_CONN_SYNAPSE367_L,
};

// position_conn_synapse367 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse367States state;
} PositionConnSynapse367;

// position_conn_synapse367 Initialisation function
void PositionConnSynapse367Init(PositionConnSynapse367* me);

// position_conn_synapse367 Execution function
void PositionConnSynapse367Run(PositionConnSynapse367* me);

#endif // POSITION_CONN_SYNAPSE367_H_