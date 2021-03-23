#ifndef POSITION_CONN_SYNAPSE360_H_
#define POSITION_CONN_SYNAPSE360_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse360 States
enum PositionConnSynapse360States {
    POSITION_CONN_SYNAPSE360_L,
};

// position_conn_synapse360 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse360States state;
} PositionConnSynapse360;

// position_conn_synapse360 Initialisation function
void PositionConnSynapse360Init(PositionConnSynapse360* me);

// position_conn_synapse360 Execution function
void PositionConnSynapse360Run(PositionConnSynapse360* me);

#endif // POSITION_CONN_SYNAPSE360_H_