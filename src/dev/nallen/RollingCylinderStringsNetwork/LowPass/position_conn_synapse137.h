#ifndef POSITION_CONN_SYNAPSE137_H_
#define POSITION_CONN_SYNAPSE137_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse137 States
enum PositionConnSynapse137States {
    POSITION_CONN_SYNAPSE137_L,
};

// position_conn_synapse137 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse137States state;
} PositionConnSynapse137;

// position_conn_synapse137 Initialisation function
void PositionConnSynapse137Init(PositionConnSynapse137* me);

// position_conn_synapse137 Execution function
void PositionConnSynapse137Run(PositionConnSynapse137* me);

#endif // POSITION_CONN_SYNAPSE137_H_