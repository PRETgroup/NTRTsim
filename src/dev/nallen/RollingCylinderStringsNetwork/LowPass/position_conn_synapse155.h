#ifndef POSITION_CONN_SYNAPSE155_H_
#define POSITION_CONN_SYNAPSE155_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse155 States
enum PositionConnSynapse155States {
    POSITION_CONN_SYNAPSE155_L,
};

// position_conn_synapse155 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse155States state;
} PositionConnSynapse155;

// position_conn_synapse155 Initialisation function
void PositionConnSynapse155Init(PositionConnSynapse155* me);

// position_conn_synapse155 Execution function
void PositionConnSynapse155Run(PositionConnSynapse155* me);

#endif // POSITION_CONN_SYNAPSE155_H_