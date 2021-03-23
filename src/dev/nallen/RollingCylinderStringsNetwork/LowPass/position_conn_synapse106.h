#ifndef POSITION_CONN_SYNAPSE106_H_
#define POSITION_CONN_SYNAPSE106_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse106 States
enum PositionConnSynapse106States {
    POSITION_CONN_SYNAPSE106_L,
};

// position_conn_synapse106 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse106States state;
} PositionConnSynapse106;

// position_conn_synapse106 Initialisation function
void PositionConnSynapse106Init(PositionConnSynapse106* me);

// position_conn_synapse106 Execution function
void PositionConnSynapse106Run(PositionConnSynapse106* me);

#endif // POSITION_CONN_SYNAPSE106_H_