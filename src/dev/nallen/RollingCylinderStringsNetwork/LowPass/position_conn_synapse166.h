#ifndef POSITION_CONN_SYNAPSE166_H_
#define POSITION_CONN_SYNAPSE166_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse166 States
enum PositionConnSynapse166States {
    POSITION_CONN_SYNAPSE166_L,
};

// position_conn_synapse166 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse166States state;
} PositionConnSynapse166;

// position_conn_synapse166 Initialisation function
void PositionConnSynapse166Init(PositionConnSynapse166* me);

// position_conn_synapse166 Execution function
void PositionConnSynapse166Run(PositionConnSynapse166* me);

#endif // POSITION_CONN_SYNAPSE166_H_