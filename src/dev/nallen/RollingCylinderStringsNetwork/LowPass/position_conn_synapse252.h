#ifndef POSITION_CONN_SYNAPSE252_H_
#define POSITION_CONN_SYNAPSE252_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse252 States
enum PositionConnSynapse252States {
    POSITION_CONN_SYNAPSE252_L,
};

// position_conn_synapse252 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse252States state;
} PositionConnSynapse252;

// position_conn_synapse252 Initialisation function
void PositionConnSynapse252Init(PositionConnSynapse252* me);

// position_conn_synapse252 Execution function
void PositionConnSynapse252Run(PositionConnSynapse252* me);

#endif // POSITION_CONN_SYNAPSE252_H_