#ifndef POSITION_CONN_SYNAPSE104_H_
#define POSITION_CONN_SYNAPSE104_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse104 States
enum PositionConnSynapse104States {
    POSITION_CONN_SYNAPSE104_L,
};

// position_conn_synapse104 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse104States state;
} PositionConnSynapse104;

// position_conn_synapse104 Initialisation function
void PositionConnSynapse104Init(PositionConnSynapse104* me);

// position_conn_synapse104 Execution function
void PositionConnSynapse104Run(PositionConnSynapse104* me);

#endif // POSITION_CONN_SYNAPSE104_H_