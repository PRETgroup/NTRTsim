#ifndef POSITION_CONN_SYNAPSE374_H_
#define POSITION_CONN_SYNAPSE374_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse374 States
enum PositionConnSynapse374States {
    POSITION_CONN_SYNAPSE374_L,
};

// position_conn_synapse374 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse374States state;
} PositionConnSynapse374;

// position_conn_synapse374 Initialisation function
void PositionConnSynapse374Init(PositionConnSynapse374* me);

// position_conn_synapse374 Execution function
void PositionConnSynapse374Run(PositionConnSynapse374* me);

#endif // POSITION_CONN_SYNAPSE374_H_