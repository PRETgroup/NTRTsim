#ifndef POSITION_CONN_SYNAPSE388_H_
#define POSITION_CONN_SYNAPSE388_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse388 States
enum PositionConnSynapse388States {
    POSITION_CONN_SYNAPSE388_L,
};

// position_conn_synapse388 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse388States state;
} PositionConnSynapse388;

// position_conn_synapse388 Initialisation function
void PositionConnSynapse388Init(PositionConnSynapse388* me);

// position_conn_synapse388 Execution function
void PositionConnSynapse388Run(PositionConnSynapse388* me);

#endif // POSITION_CONN_SYNAPSE388_H_