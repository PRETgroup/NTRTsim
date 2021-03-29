#ifndef POSITION_CONN_SYNAPSE156_H_
#define POSITION_CONN_SYNAPSE156_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse156 States
enum PositionConnSynapse156States {
    POSITION_CONN_SYNAPSE156_L,
};

// position_conn_synapse156 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse156States state;
} PositionConnSynapse156;

// position_conn_synapse156 Initialisation function
void PositionConnSynapse156Init(PositionConnSynapse156* me);

// position_conn_synapse156 Execution function
void PositionConnSynapse156Run(PositionConnSynapse156* me);

#endif // POSITION_CONN_SYNAPSE156_H_