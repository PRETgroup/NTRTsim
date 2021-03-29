#ifndef POSITION_CONN_SYNAPSE174_H_
#define POSITION_CONN_SYNAPSE174_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse174 States
enum PositionConnSynapse174States {
    POSITION_CONN_SYNAPSE174_L,
};

// position_conn_synapse174 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse174States state;
} PositionConnSynapse174;

// position_conn_synapse174 Initialisation function
void PositionConnSynapse174Init(PositionConnSynapse174* me);

// position_conn_synapse174 Execution function
void PositionConnSynapse174Run(PositionConnSynapse174* me);

#endif // POSITION_CONN_SYNAPSE174_H_