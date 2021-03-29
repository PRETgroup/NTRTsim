#ifndef POSITION_CONN_SYNAPSE180_H_
#define POSITION_CONN_SYNAPSE180_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse180 States
enum PositionConnSynapse180States {
    POSITION_CONN_SYNAPSE180_L,
};

// position_conn_synapse180 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse180States state;
} PositionConnSynapse180;

// position_conn_synapse180 Initialisation function
void PositionConnSynapse180Init(PositionConnSynapse180* me);

// position_conn_synapse180 Execution function
void PositionConnSynapse180Run(PositionConnSynapse180* me);

#endif // POSITION_CONN_SYNAPSE180_H_