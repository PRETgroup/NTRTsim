#ifndef POSITION_CONN_SYNAPSE398_H_
#define POSITION_CONN_SYNAPSE398_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse398 States
enum PositionConnSynapse398States {
    POSITION_CONN_SYNAPSE398_L,
};

// position_conn_synapse398 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse398States state;
} PositionConnSynapse398;

// position_conn_synapse398 Initialisation function
void PositionConnSynapse398Init(PositionConnSynapse398* me);

// position_conn_synapse398 Execution function
void PositionConnSynapse398Run(PositionConnSynapse398* me);

#endif // POSITION_CONN_SYNAPSE398_H_