#ifndef POSITION_CONN_SYNAPSE11_H_
#define POSITION_CONN_SYNAPSE11_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse11 States
enum PositionConnSynapse11States {
    POSITION_CONN_SYNAPSE11_L,
};

// position_conn_synapse11 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse11States state;
} PositionConnSynapse11;

// position_conn_synapse11 Initialisation function
void PositionConnSynapse11Init(PositionConnSynapse11* me);

// position_conn_synapse11 Execution function
void PositionConnSynapse11Run(PositionConnSynapse11* me);

#endif // POSITION_CONN_SYNAPSE11_H_