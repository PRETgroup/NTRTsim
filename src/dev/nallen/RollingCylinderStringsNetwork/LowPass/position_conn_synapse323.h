#ifndef POSITION_CONN_SYNAPSE323_H_
#define POSITION_CONN_SYNAPSE323_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse323 States
enum PositionConnSynapse323States {
    POSITION_CONN_SYNAPSE323_L,
};

// position_conn_synapse323 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse323States state;
} PositionConnSynapse323;

// position_conn_synapse323 Initialisation function
void PositionConnSynapse323Init(PositionConnSynapse323* me);

// position_conn_synapse323 Execution function
void PositionConnSynapse323Run(PositionConnSynapse323* me);

#endif // POSITION_CONN_SYNAPSE323_H_