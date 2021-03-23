#ifndef POSITION_CONN_SYNAPSE262_H_
#define POSITION_CONN_SYNAPSE262_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse262 States
enum PositionConnSynapse262States {
    POSITION_CONN_SYNAPSE262_L,
};

// position_conn_synapse262 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse262States state;
} PositionConnSynapse262;

// position_conn_synapse262 Initialisation function
void PositionConnSynapse262Init(PositionConnSynapse262* me);

// position_conn_synapse262 Execution function
void PositionConnSynapse262Run(PositionConnSynapse262* me);

#endif // POSITION_CONN_SYNAPSE262_H_