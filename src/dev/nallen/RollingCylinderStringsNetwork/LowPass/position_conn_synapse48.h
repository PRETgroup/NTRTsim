#ifndef POSITION_CONN_SYNAPSE48_H_
#define POSITION_CONN_SYNAPSE48_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse48 States
enum PositionConnSynapse48States {
    POSITION_CONN_SYNAPSE48_L,
};

// position_conn_synapse48 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse48States state;
} PositionConnSynapse48;

// position_conn_synapse48 Initialisation function
void PositionConnSynapse48Init(PositionConnSynapse48* me);

// position_conn_synapse48 Execution function
void PositionConnSynapse48Run(PositionConnSynapse48* me);

#endif // POSITION_CONN_SYNAPSE48_H_