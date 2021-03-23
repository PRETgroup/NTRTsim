#ifndef POSITION_CONN_SYNAPSE376_H_
#define POSITION_CONN_SYNAPSE376_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse376 States
enum PositionConnSynapse376States {
    POSITION_CONN_SYNAPSE376_L,
};

// position_conn_synapse376 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse376States state;
} PositionConnSynapse376;

// position_conn_synapse376 Initialisation function
void PositionConnSynapse376Init(PositionConnSynapse376* me);

// position_conn_synapse376 Execution function
void PositionConnSynapse376Run(PositionConnSynapse376* me);

#endif // POSITION_CONN_SYNAPSE376_H_