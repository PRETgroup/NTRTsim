#ifndef POSITION_CONN_SYNAPSE218_H_
#define POSITION_CONN_SYNAPSE218_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse218 States
enum PositionConnSynapse218States {
    POSITION_CONN_SYNAPSE218_L,
};

// position_conn_synapse218 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse218States state;
} PositionConnSynapse218;

// position_conn_synapse218 Initialisation function
void PositionConnSynapse218Init(PositionConnSynapse218* me);

// position_conn_synapse218 Execution function
void PositionConnSynapse218Run(PositionConnSynapse218* me);

#endif // POSITION_CONN_SYNAPSE218_H_