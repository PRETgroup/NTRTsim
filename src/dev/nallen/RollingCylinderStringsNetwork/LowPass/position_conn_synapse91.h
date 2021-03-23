#ifndef POSITION_CONN_SYNAPSE91_H_
#define POSITION_CONN_SYNAPSE91_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse91 States
enum PositionConnSynapse91States {
    POSITION_CONN_SYNAPSE91_L,
};

// position_conn_synapse91 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse91States state;
} PositionConnSynapse91;

// position_conn_synapse91 Initialisation function
void PositionConnSynapse91Init(PositionConnSynapse91* me);

// position_conn_synapse91 Execution function
void PositionConnSynapse91Run(PositionConnSynapse91* me);

#endif // POSITION_CONN_SYNAPSE91_H_