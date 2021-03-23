#ifndef POSITION_CONN_SYNAPSE290_H_
#define POSITION_CONN_SYNAPSE290_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse290 States
enum PositionConnSynapse290States {
    POSITION_CONN_SYNAPSE290_L,
};

// position_conn_synapse290 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse290States state;
} PositionConnSynapse290;

// position_conn_synapse290 Initialisation function
void PositionConnSynapse290Init(PositionConnSynapse290* me);

// position_conn_synapse290 Execution function
void PositionConnSynapse290Run(PositionConnSynapse290* me);

#endif // POSITION_CONN_SYNAPSE290_H_