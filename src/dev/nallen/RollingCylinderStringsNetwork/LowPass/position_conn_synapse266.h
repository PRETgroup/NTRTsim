#ifndef POSITION_CONN_SYNAPSE266_H_
#define POSITION_CONN_SYNAPSE266_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse266 States
enum PositionConnSynapse266States {
    POSITION_CONN_SYNAPSE266_L,
};

// position_conn_synapse266 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse266States state;
} PositionConnSynapse266;

// position_conn_synapse266 Initialisation function
void PositionConnSynapse266Init(PositionConnSynapse266* me);

// position_conn_synapse266 Execution function
void PositionConnSynapse266Run(PositionConnSynapse266* me);

#endif // POSITION_CONN_SYNAPSE266_H_