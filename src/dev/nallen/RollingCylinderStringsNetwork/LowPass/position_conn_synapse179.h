#ifndef POSITION_CONN_SYNAPSE179_H_
#define POSITION_CONN_SYNAPSE179_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse179 States
enum PositionConnSynapse179States {
    POSITION_CONN_SYNAPSE179_L,
};

// position_conn_synapse179 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse179States state;
} PositionConnSynapse179;

// position_conn_synapse179 Initialisation function
void PositionConnSynapse179Init(PositionConnSynapse179* me);

// position_conn_synapse179 Execution function
void PositionConnSynapse179Run(PositionConnSynapse179* me);

#endif // POSITION_CONN_SYNAPSE179_H_