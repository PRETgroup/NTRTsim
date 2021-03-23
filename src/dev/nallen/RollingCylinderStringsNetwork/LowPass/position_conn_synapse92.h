#ifndef POSITION_CONN_SYNAPSE92_H_
#define POSITION_CONN_SYNAPSE92_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse92 States
enum PositionConnSynapse92States {
    POSITION_CONN_SYNAPSE92_L,
};

// position_conn_synapse92 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse92States state;
} PositionConnSynapse92;

// position_conn_synapse92 Initialisation function
void PositionConnSynapse92Init(PositionConnSynapse92* me);

// position_conn_synapse92 Execution function
void PositionConnSynapse92Run(PositionConnSynapse92* me);

#endif // POSITION_CONN_SYNAPSE92_H_