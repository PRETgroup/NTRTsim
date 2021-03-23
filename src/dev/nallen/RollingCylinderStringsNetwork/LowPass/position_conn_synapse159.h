#ifndef POSITION_CONN_SYNAPSE159_H_
#define POSITION_CONN_SYNAPSE159_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse159 States
enum PositionConnSynapse159States {
    POSITION_CONN_SYNAPSE159_L,
};

// position_conn_synapse159 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse159States state;
} PositionConnSynapse159;

// position_conn_synapse159 Initialisation function
void PositionConnSynapse159Init(PositionConnSynapse159* me);

// position_conn_synapse159 Execution function
void PositionConnSynapse159Run(PositionConnSynapse159* me);

#endif // POSITION_CONN_SYNAPSE159_H_