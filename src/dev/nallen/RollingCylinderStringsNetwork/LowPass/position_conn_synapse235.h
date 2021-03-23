#ifndef POSITION_CONN_SYNAPSE235_H_
#define POSITION_CONN_SYNAPSE235_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse235 States
enum PositionConnSynapse235States {
    POSITION_CONN_SYNAPSE235_L,
};

// position_conn_synapse235 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse235States state;
} PositionConnSynapse235;

// position_conn_synapse235 Initialisation function
void PositionConnSynapse235Init(PositionConnSynapse235* me);

// position_conn_synapse235 Execution function
void PositionConnSynapse235Run(PositionConnSynapse235* me);

#endif // POSITION_CONN_SYNAPSE235_H_