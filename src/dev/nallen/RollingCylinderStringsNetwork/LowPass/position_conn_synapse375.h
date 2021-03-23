#ifndef POSITION_CONN_SYNAPSE375_H_
#define POSITION_CONN_SYNAPSE375_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse375 States
enum PositionConnSynapse375States {
    POSITION_CONN_SYNAPSE375_L,
};

// position_conn_synapse375 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse375States state;
} PositionConnSynapse375;

// position_conn_synapse375 Initialisation function
void PositionConnSynapse375Init(PositionConnSynapse375* me);

// position_conn_synapse375 Execution function
void PositionConnSynapse375Run(PositionConnSynapse375* me);

#endif // POSITION_CONN_SYNAPSE375_H_