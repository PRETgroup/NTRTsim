#ifndef POSITION_CONN_SYNAPSE151_H_
#define POSITION_CONN_SYNAPSE151_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse151 States
enum PositionConnSynapse151States {
    POSITION_CONN_SYNAPSE151_L,
};

// position_conn_synapse151 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse151States state;
} PositionConnSynapse151;

// position_conn_synapse151 Initialisation function
void PositionConnSynapse151Init(PositionConnSynapse151* me);

// position_conn_synapse151 Execution function
void PositionConnSynapse151Run(PositionConnSynapse151* me);

#endif // POSITION_CONN_SYNAPSE151_H_