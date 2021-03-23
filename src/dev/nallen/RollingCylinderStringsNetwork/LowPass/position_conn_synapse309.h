#ifndef POSITION_CONN_SYNAPSE309_H_
#define POSITION_CONN_SYNAPSE309_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse309 States
enum PositionConnSynapse309States {
    POSITION_CONN_SYNAPSE309_L,
};

// position_conn_synapse309 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse309States state;
} PositionConnSynapse309;

// position_conn_synapse309 Initialisation function
void PositionConnSynapse309Init(PositionConnSynapse309* me);

// position_conn_synapse309 Execution function
void PositionConnSynapse309Run(PositionConnSynapse309* me);

#endif // POSITION_CONN_SYNAPSE309_H_