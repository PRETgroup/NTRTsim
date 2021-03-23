#ifndef POSITION_CONN_SYNAPSE83_H_
#define POSITION_CONN_SYNAPSE83_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse83 States
enum PositionConnSynapse83States {
    POSITION_CONN_SYNAPSE83_L,
};

// position_conn_synapse83 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse83States state;
} PositionConnSynapse83;

// position_conn_synapse83 Initialisation function
void PositionConnSynapse83Init(PositionConnSynapse83* me);

// position_conn_synapse83 Execution function
void PositionConnSynapse83Run(PositionConnSynapse83* me);

#endif // POSITION_CONN_SYNAPSE83_H_