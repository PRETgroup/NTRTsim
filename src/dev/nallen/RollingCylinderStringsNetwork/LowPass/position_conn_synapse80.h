#ifndef POSITION_CONN_SYNAPSE80_H_
#define POSITION_CONN_SYNAPSE80_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse80 States
enum PositionConnSynapse80States {
    POSITION_CONN_SYNAPSE80_L,
};

// position_conn_synapse80 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse80States state;
} PositionConnSynapse80;

// position_conn_synapse80 Initialisation function
void PositionConnSynapse80Init(PositionConnSynapse80* me);

// position_conn_synapse80 Execution function
void PositionConnSynapse80Run(PositionConnSynapse80* me);

#endif // POSITION_CONN_SYNAPSE80_H_