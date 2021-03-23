#ifndef POSITION_CONN_SYNAPSE207_H_
#define POSITION_CONN_SYNAPSE207_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse207 States
enum PositionConnSynapse207States {
    POSITION_CONN_SYNAPSE207_L,
};

// position_conn_synapse207 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse207States state;
} PositionConnSynapse207;

// position_conn_synapse207 Initialisation function
void PositionConnSynapse207Init(PositionConnSynapse207* me);

// position_conn_synapse207 Execution function
void PositionConnSynapse207Run(PositionConnSynapse207* me);

#endif // POSITION_CONN_SYNAPSE207_H_