#ifndef POSITION_CONN_SYNAPSE234_H_
#define POSITION_CONN_SYNAPSE234_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse234 States
enum PositionConnSynapse234States {
    POSITION_CONN_SYNAPSE234_L,
};

// position_conn_synapse234 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse234States state;
} PositionConnSynapse234;

// position_conn_synapse234 Initialisation function
void PositionConnSynapse234Init(PositionConnSynapse234* me);

// position_conn_synapse234 Execution function
void PositionConnSynapse234Run(PositionConnSynapse234* me);

#endif // POSITION_CONN_SYNAPSE234_H_