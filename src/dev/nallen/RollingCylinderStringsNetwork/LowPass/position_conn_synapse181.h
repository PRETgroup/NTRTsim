#ifndef POSITION_CONN_SYNAPSE181_H_
#define POSITION_CONN_SYNAPSE181_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse181 States
enum PositionConnSynapse181States {
    POSITION_CONN_SYNAPSE181_L,
};

// position_conn_synapse181 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse181States state;
} PositionConnSynapse181;

// position_conn_synapse181 Initialisation function
void PositionConnSynapse181Init(PositionConnSynapse181* me);

// position_conn_synapse181 Execution function
void PositionConnSynapse181Run(PositionConnSynapse181* me);

#endif // POSITION_CONN_SYNAPSE181_H_