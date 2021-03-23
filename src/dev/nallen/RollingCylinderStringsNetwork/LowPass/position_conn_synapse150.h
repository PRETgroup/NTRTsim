#ifndef POSITION_CONN_SYNAPSE150_H_
#define POSITION_CONN_SYNAPSE150_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse150 States
enum PositionConnSynapse150States {
    POSITION_CONN_SYNAPSE150_L,
};

// position_conn_synapse150 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse150States state;
} PositionConnSynapse150;

// position_conn_synapse150 Initialisation function
void PositionConnSynapse150Init(PositionConnSynapse150* me);

// position_conn_synapse150 Execution function
void PositionConnSynapse150Run(PositionConnSynapse150* me);

#endif // POSITION_CONN_SYNAPSE150_H_