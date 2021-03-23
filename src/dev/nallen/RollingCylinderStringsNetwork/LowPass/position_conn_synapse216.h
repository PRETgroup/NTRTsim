#ifndef POSITION_CONN_SYNAPSE216_H_
#define POSITION_CONN_SYNAPSE216_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse216 States
enum PositionConnSynapse216States {
    POSITION_CONN_SYNAPSE216_L,
};

// position_conn_synapse216 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse216States state;
} PositionConnSynapse216;

// position_conn_synapse216 Initialisation function
void PositionConnSynapse216Init(PositionConnSynapse216* me);

// position_conn_synapse216 Execution function
void PositionConnSynapse216Run(PositionConnSynapse216* me);

#endif // POSITION_CONN_SYNAPSE216_H_