#ifndef POSITION_CONN_SYNAPSE296_H_
#define POSITION_CONN_SYNAPSE296_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse296 States
enum PositionConnSynapse296States {
    POSITION_CONN_SYNAPSE296_L,
};

// position_conn_synapse296 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse296States state;
} PositionConnSynapse296;

// position_conn_synapse296 Initialisation function
void PositionConnSynapse296Init(PositionConnSynapse296* me);

// position_conn_synapse296 Execution function
void PositionConnSynapse296Run(PositionConnSynapse296* me);

#endif // POSITION_CONN_SYNAPSE296_H_