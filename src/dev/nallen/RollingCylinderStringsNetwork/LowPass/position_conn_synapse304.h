#ifndef POSITION_CONN_SYNAPSE304_H_
#define POSITION_CONN_SYNAPSE304_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse304 States
enum PositionConnSynapse304States {
    POSITION_CONN_SYNAPSE304_L,
};

// position_conn_synapse304 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse304States state;
} PositionConnSynapse304;

// position_conn_synapse304 Initialisation function
void PositionConnSynapse304Init(PositionConnSynapse304* me);

// position_conn_synapse304 Execution function
void PositionConnSynapse304Run(PositionConnSynapse304* me);

#endif // POSITION_CONN_SYNAPSE304_H_