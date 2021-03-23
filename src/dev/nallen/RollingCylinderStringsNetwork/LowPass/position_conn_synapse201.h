#ifndef POSITION_CONN_SYNAPSE201_H_
#define POSITION_CONN_SYNAPSE201_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse201 States
enum PositionConnSynapse201States {
    POSITION_CONN_SYNAPSE201_L,
};

// position_conn_synapse201 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse201States state;
} PositionConnSynapse201;

// position_conn_synapse201 Initialisation function
void PositionConnSynapse201Init(PositionConnSynapse201* me);

// position_conn_synapse201 Execution function
void PositionConnSynapse201Run(PositionConnSynapse201* me);

#endif // POSITION_CONN_SYNAPSE201_H_