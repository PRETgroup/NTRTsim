#ifndef POSITION_CONN_SYNAPSE53_H_
#define POSITION_CONN_SYNAPSE53_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse53 States
enum PositionConnSynapse53States {
    POSITION_CONN_SYNAPSE53_L,
};

// position_conn_synapse53 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse53States state;
} PositionConnSynapse53;

// position_conn_synapse53 Initialisation function
void PositionConnSynapse53Init(PositionConnSynapse53* me);

// position_conn_synapse53 Execution function
void PositionConnSynapse53Run(PositionConnSynapse53* me);

#endif // POSITION_CONN_SYNAPSE53_H_