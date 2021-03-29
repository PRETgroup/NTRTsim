#ifndef POSITION_CONN_SYNAPSE112_H_
#define POSITION_CONN_SYNAPSE112_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse112 States
enum PositionConnSynapse112States {
    POSITION_CONN_SYNAPSE112_L,
};

// position_conn_synapse112 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse112States state;
} PositionConnSynapse112;

// position_conn_synapse112 Initialisation function
void PositionConnSynapse112Init(PositionConnSynapse112* me);

// position_conn_synapse112 Execution function
void PositionConnSynapse112Run(PositionConnSynapse112* me);

#endif // POSITION_CONN_SYNAPSE112_H_