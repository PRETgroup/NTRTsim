#ifndef POSITION_CONN_SYNAPSE8_H_
#define POSITION_CONN_SYNAPSE8_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse8 States
enum PositionConnSynapse8States {
    POSITION_CONN_SYNAPSE8_L,
};

// position_conn_synapse8 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse8States state;
} PositionConnSynapse8;

// position_conn_synapse8 Initialisation function
void PositionConnSynapse8Init(PositionConnSynapse8* me);

// position_conn_synapse8 Execution function
void PositionConnSynapse8Run(PositionConnSynapse8* me);

#endif // POSITION_CONN_SYNAPSE8_H_