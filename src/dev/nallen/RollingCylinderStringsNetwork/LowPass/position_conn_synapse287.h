#ifndef POSITION_CONN_SYNAPSE287_H_
#define POSITION_CONN_SYNAPSE287_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse287 States
enum PositionConnSynapse287States {
    POSITION_CONN_SYNAPSE287_L,
};

// position_conn_synapse287 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse287States state;
} PositionConnSynapse287;

// position_conn_synapse287 Initialisation function
void PositionConnSynapse287Init(PositionConnSynapse287* me);

// position_conn_synapse287 Execution function
void PositionConnSynapse287Run(PositionConnSynapse287* me);

#endif // POSITION_CONN_SYNAPSE287_H_