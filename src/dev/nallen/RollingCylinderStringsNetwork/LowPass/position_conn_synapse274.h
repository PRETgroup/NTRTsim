#ifndef POSITION_CONN_SYNAPSE274_H_
#define POSITION_CONN_SYNAPSE274_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse274 States
enum PositionConnSynapse274States {
    POSITION_CONN_SYNAPSE274_L,
};

// position_conn_synapse274 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse274States state;
} PositionConnSynapse274;

// position_conn_synapse274 Initialisation function
void PositionConnSynapse274Init(PositionConnSynapse274* me);

// position_conn_synapse274 Execution function
void PositionConnSynapse274Run(PositionConnSynapse274* me);

#endif // POSITION_CONN_SYNAPSE274_H_