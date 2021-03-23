#ifndef POSITION_CONN_SYNAPSE30_H_
#define POSITION_CONN_SYNAPSE30_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse30 States
enum PositionConnSynapse30States {
    POSITION_CONN_SYNAPSE30_L,
};

// position_conn_synapse30 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse30States state;
} PositionConnSynapse30;

// position_conn_synapse30 Initialisation function
void PositionConnSynapse30Init(PositionConnSynapse30* me);

// position_conn_synapse30 Execution function
void PositionConnSynapse30Run(PositionConnSynapse30* me);

#endif // POSITION_CONN_SYNAPSE30_H_