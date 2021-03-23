#ifndef POSITION_CONN_SYNAPSE285_H_
#define POSITION_CONN_SYNAPSE285_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse285 States
enum PositionConnSynapse285States {
    POSITION_CONN_SYNAPSE285_L,
};

// position_conn_synapse285 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse285States state;
} PositionConnSynapse285;

// position_conn_synapse285 Initialisation function
void PositionConnSynapse285Init(PositionConnSynapse285* me);

// position_conn_synapse285 Execution function
void PositionConnSynapse285Run(PositionConnSynapse285* me);

#endif // POSITION_CONN_SYNAPSE285_H_