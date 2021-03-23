#ifndef POSITION_CONN_SYNAPSE353_H_
#define POSITION_CONN_SYNAPSE353_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse353 States
enum PositionConnSynapse353States {
    POSITION_CONN_SYNAPSE353_L,
};

// position_conn_synapse353 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse353States state;
} PositionConnSynapse353;

// position_conn_synapse353 Initialisation function
void PositionConnSynapse353Init(PositionConnSynapse353* me);

// position_conn_synapse353 Execution function
void PositionConnSynapse353Run(PositionConnSynapse353* me);

#endif // POSITION_CONN_SYNAPSE353_H_