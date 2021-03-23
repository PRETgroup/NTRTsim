#ifndef POSITION_CONN_SYNAPSE22_H_
#define POSITION_CONN_SYNAPSE22_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse22 States
enum PositionConnSynapse22States {
    POSITION_CONN_SYNAPSE22_L,
};

// position_conn_synapse22 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse22States state;
} PositionConnSynapse22;

// position_conn_synapse22 Initialisation function
void PositionConnSynapse22Init(PositionConnSynapse22* me);

// position_conn_synapse22 Execution function
void PositionConnSynapse22Run(PositionConnSynapse22* me);

#endif // POSITION_CONN_SYNAPSE22_H_