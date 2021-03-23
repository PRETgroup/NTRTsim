#ifndef POSITION_CONN_SYNAPSE288_H_
#define POSITION_CONN_SYNAPSE288_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse288 States
enum PositionConnSynapse288States {
    POSITION_CONN_SYNAPSE288_L,
};

// position_conn_synapse288 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse288States state;
} PositionConnSynapse288;

// position_conn_synapse288 Initialisation function
void PositionConnSynapse288Init(PositionConnSynapse288* me);

// position_conn_synapse288 Execution function
void PositionConnSynapse288Run(PositionConnSynapse288* me);

#endif // POSITION_CONN_SYNAPSE288_H_