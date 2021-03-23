#ifndef POSITION_CONN_SYNAPSE395_H_
#define POSITION_CONN_SYNAPSE395_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse395 States
enum PositionConnSynapse395States {
    POSITION_CONN_SYNAPSE395_L,
};

// position_conn_synapse395 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse395States state;
} PositionConnSynapse395;

// position_conn_synapse395 Initialisation function
void PositionConnSynapse395Init(PositionConnSynapse395* me);

// position_conn_synapse395 Execution function
void PositionConnSynapse395Run(PositionConnSynapse395* me);

#endif // POSITION_CONN_SYNAPSE395_H_