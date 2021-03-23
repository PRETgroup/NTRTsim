#ifndef POSITION_CONN_SYNAPSE6_H_
#define POSITION_CONN_SYNAPSE6_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse6 States
enum PositionConnSynapse6States {
    POSITION_CONN_SYNAPSE6_L,
};

// position_conn_synapse6 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse6States state;
} PositionConnSynapse6;

// position_conn_synapse6 Initialisation function
void PositionConnSynapse6Init(PositionConnSynapse6* me);

// position_conn_synapse6 Execution function
void PositionConnSynapse6Run(PositionConnSynapse6* me);

#endif // POSITION_CONN_SYNAPSE6_H_