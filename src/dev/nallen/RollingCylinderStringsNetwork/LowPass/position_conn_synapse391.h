#ifndef POSITION_CONN_SYNAPSE391_H_
#define POSITION_CONN_SYNAPSE391_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse391 States
enum PositionConnSynapse391States {
    POSITION_CONN_SYNAPSE391_L,
};

// position_conn_synapse391 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse391States state;
} PositionConnSynapse391;

// position_conn_synapse391 Initialisation function
void PositionConnSynapse391Init(PositionConnSynapse391* me);

// position_conn_synapse391 Execution function
void PositionConnSynapse391Run(PositionConnSynapse391* me);

#endif // POSITION_CONN_SYNAPSE391_H_