#ifndef POSITION_CONN_SYNAPSE196_H_
#define POSITION_CONN_SYNAPSE196_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse196 States
enum PositionConnSynapse196States {
    POSITION_CONN_SYNAPSE196_L,
};

// position_conn_synapse196 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse196States state;
} PositionConnSynapse196;

// position_conn_synapse196 Initialisation function
void PositionConnSynapse196Init(PositionConnSynapse196* me);

// position_conn_synapse196 Execution function
void PositionConnSynapse196Run(PositionConnSynapse196* me);

#endif // POSITION_CONN_SYNAPSE196_H_