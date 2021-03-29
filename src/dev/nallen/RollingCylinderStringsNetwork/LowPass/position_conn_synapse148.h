#ifndef POSITION_CONN_SYNAPSE148_H_
#define POSITION_CONN_SYNAPSE148_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse148 States
enum PositionConnSynapse148States {
    POSITION_CONN_SYNAPSE148_L,
};

// position_conn_synapse148 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse148States state;
} PositionConnSynapse148;

// position_conn_synapse148 Initialisation function
void PositionConnSynapse148Init(PositionConnSynapse148* me);

// position_conn_synapse148 Execution function
void PositionConnSynapse148Run(PositionConnSynapse148* me);

#endif // POSITION_CONN_SYNAPSE148_H_