#ifndef POSITION_CONN_SYNAPSE0_H_
#define POSITION_CONN_SYNAPSE0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse0 States
enum PositionConnSynapse0States {
    POSITION_CONN_SYNAPSE0_L,
};

// position_conn_synapse0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse0States state;
} PositionConnSynapse0;

// position_conn_synapse0 Initialisation function
void PositionConnSynapse0Init(PositionConnSynapse0* me);

// position_conn_synapse0 Execution function
void PositionConnSynapse0Run(PositionConnSynapse0* me);

#endif // POSITION_CONN_SYNAPSE0_H_