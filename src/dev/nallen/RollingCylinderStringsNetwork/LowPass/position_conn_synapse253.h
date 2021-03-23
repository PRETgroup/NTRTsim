#ifndef POSITION_CONN_SYNAPSE253_H_
#define POSITION_CONN_SYNAPSE253_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse253 States
enum PositionConnSynapse253States {
    POSITION_CONN_SYNAPSE253_L,
};

// position_conn_synapse253 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse253States state;
} PositionConnSynapse253;

// position_conn_synapse253 Initialisation function
void PositionConnSynapse253Init(PositionConnSynapse253* me);

// position_conn_synapse253 Execution function
void PositionConnSynapse253Run(PositionConnSynapse253* me);

#endif // POSITION_CONN_SYNAPSE253_H_