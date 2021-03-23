#ifndef POSITION_CONN_SYNAPSE362_H_
#define POSITION_CONN_SYNAPSE362_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse362 States
enum PositionConnSynapse362States {
    POSITION_CONN_SYNAPSE362_L,
};

// position_conn_synapse362 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse362States state;
} PositionConnSynapse362;

// position_conn_synapse362 Initialisation function
void PositionConnSynapse362Init(PositionConnSynapse362* me);

// position_conn_synapse362 Execution function
void PositionConnSynapse362Run(PositionConnSynapse362* me);

#endif // POSITION_CONN_SYNAPSE362_H_