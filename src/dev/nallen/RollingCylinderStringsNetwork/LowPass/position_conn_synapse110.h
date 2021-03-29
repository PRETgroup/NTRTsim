#ifndef POSITION_CONN_SYNAPSE110_H_
#define POSITION_CONN_SYNAPSE110_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse110 States
enum PositionConnSynapse110States {
    POSITION_CONN_SYNAPSE110_L,
};

// position_conn_synapse110 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse110States state;
} PositionConnSynapse110;

// position_conn_synapse110 Initialisation function
void PositionConnSynapse110Init(PositionConnSynapse110* me);

// position_conn_synapse110 Execution function
void PositionConnSynapse110Run(PositionConnSynapse110* me);

#endif // POSITION_CONN_SYNAPSE110_H_