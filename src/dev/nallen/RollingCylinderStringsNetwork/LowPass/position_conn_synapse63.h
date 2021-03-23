#ifndef POSITION_CONN_SYNAPSE63_H_
#define POSITION_CONN_SYNAPSE63_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse63 States
enum PositionConnSynapse63States {
    POSITION_CONN_SYNAPSE63_L,
};

// position_conn_synapse63 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse63States state;
} PositionConnSynapse63;

// position_conn_synapse63 Initialisation function
void PositionConnSynapse63Init(PositionConnSynapse63* me);

// position_conn_synapse63 Execution function
void PositionConnSynapse63Run(PositionConnSynapse63* me);

#endif // POSITION_CONN_SYNAPSE63_H_