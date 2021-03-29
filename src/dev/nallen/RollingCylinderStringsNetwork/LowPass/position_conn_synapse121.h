#ifndef POSITION_CONN_SYNAPSE121_H_
#define POSITION_CONN_SYNAPSE121_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse121 States
enum PositionConnSynapse121States {
    POSITION_CONN_SYNAPSE121_L,
};

// position_conn_synapse121 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse121States state;
} PositionConnSynapse121;

// position_conn_synapse121 Initialisation function
void PositionConnSynapse121Init(PositionConnSynapse121* me);

// position_conn_synapse121 Execution function
void PositionConnSynapse121Run(PositionConnSynapse121* me);

#endif // POSITION_CONN_SYNAPSE121_H_