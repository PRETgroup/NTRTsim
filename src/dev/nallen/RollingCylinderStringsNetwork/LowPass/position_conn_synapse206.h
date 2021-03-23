#ifndef POSITION_CONN_SYNAPSE206_H_
#define POSITION_CONN_SYNAPSE206_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse206 States
enum PositionConnSynapse206States {
    POSITION_CONN_SYNAPSE206_L,
};

// position_conn_synapse206 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse206States state;
} PositionConnSynapse206;

// position_conn_synapse206 Initialisation function
void PositionConnSynapse206Init(PositionConnSynapse206* me);

// position_conn_synapse206 Execution function
void PositionConnSynapse206Run(PositionConnSynapse206* me);

#endif // POSITION_CONN_SYNAPSE206_H_