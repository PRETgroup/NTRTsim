#ifndef POSITION_CONN_SYNAPSE320_H_
#define POSITION_CONN_SYNAPSE320_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse320 States
enum PositionConnSynapse320States {
    POSITION_CONN_SYNAPSE320_L,
};

// position_conn_synapse320 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse320States state;
} PositionConnSynapse320;

// position_conn_synapse320 Initialisation function
void PositionConnSynapse320Init(PositionConnSynapse320* me);

// position_conn_synapse320 Execution function
void PositionConnSynapse320Run(PositionConnSynapse320* me);

#endif // POSITION_CONN_SYNAPSE320_H_