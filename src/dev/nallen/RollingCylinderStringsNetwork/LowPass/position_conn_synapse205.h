#ifndef POSITION_CONN_SYNAPSE205_H_
#define POSITION_CONN_SYNAPSE205_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse205 States
enum PositionConnSynapse205States {
    POSITION_CONN_SYNAPSE205_L,
};

// position_conn_synapse205 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse205States state;
} PositionConnSynapse205;

// position_conn_synapse205 Initialisation function
void PositionConnSynapse205Init(PositionConnSynapse205* me);

// position_conn_synapse205 Execution function
void PositionConnSynapse205Run(PositionConnSynapse205* me);

#endif // POSITION_CONN_SYNAPSE205_H_