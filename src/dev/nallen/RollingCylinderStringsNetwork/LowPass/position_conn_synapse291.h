#ifndef POSITION_CONN_SYNAPSE291_H_
#define POSITION_CONN_SYNAPSE291_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse291 States
enum PositionConnSynapse291States {
    POSITION_CONN_SYNAPSE291_L,
};

// position_conn_synapse291 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse291States state;
} PositionConnSynapse291;

// position_conn_synapse291 Initialisation function
void PositionConnSynapse291Init(PositionConnSynapse291* me);

// position_conn_synapse291 Execution function
void PositionConnSynapse291Run(PositionConnSynapse291* me);

#endif // POSITION_CONN_SYNAPSE291_H_