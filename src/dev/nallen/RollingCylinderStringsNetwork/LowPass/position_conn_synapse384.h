#ifndef POSITION_CONN_SYNAPSE384_H_
#define POSITION_CONN_SYNAPSE384_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse384 States
enum PositionConnSynapse384States {
    POSITION_CONN_SYNAPSE384_L,
};

// position_conn_synapse384 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse384States state;
} PositionConnSynapse384;

// position_conn_synapse384 Initialisation function
void PositionConnSynapse384Init(PositionConnSynapse384* me);

// position_conn_synapse384 Execution function
void PositionConnSynapse384Run(PositionConnSynapse384* me);

#endif // POSITION_CONN_SYNAPSE384_H_