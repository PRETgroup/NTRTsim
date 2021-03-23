#ifndef POSITION_CONN_SYNAPSE361_H_
#define POSITION_CONN_SYNAPSE361_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse361 States
enum PositionConnSynapse361States {
    POSITION_CONN_SYNAPSE361_L,
};

// position_conn_synapse361 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse361States state;
} PositionConnSynapse361;

// position_conn_synapse361 Initialisation function
void PositionConnSynapse361Init(PositionConnSynapse361* me);

// position_conn_synapse361 Execution function
void PositionConnSynapse361Run(PositionConnSynapse361* me);

#endif // POSITION_CONN_SYNAPSE361_H_