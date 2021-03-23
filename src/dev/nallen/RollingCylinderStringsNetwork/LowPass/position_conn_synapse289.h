#ifndef POSITION_CONN_SYNAPSE289_H_
#define POSITION_CONN_SYNAPSE289_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse289 States
enum PositionConnSynapse289States {
    POSITION_CONN_SYNAPSE289_L,
};

// position_conn_synapse289 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse289States state;
} PositionConnSynapse289;

// position_conn_synapse289 Initialisation function
void PositionConnSynapse289Init(PositionConnSynapse289* me);

// position_conn_synapse289 Execution function
void PositionConnSynapse289Run(PositionConnSynapse289* me);

#endif // POSITION_CONN_SYNAPSE289_H_