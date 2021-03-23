#ifndef POSITION_CONN_SYNAPSE342_H_
#define POSITION_CONN_SYNAPSE342_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse342 States
enum PositionConnSynapse342States {
    POSITION_CONN_SYNAPSE342_L,
};

// position_conn_synapse342 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse342States state;
} PositionConnSynapse342;

// position_conn_synapse342 Initialisation function
void PositionConnSynapse342Init(PositionConnSynapse342* me);

// position_conn_synapse342 Execution function
void PositionConnSynapse342Run(PositionConnSynapse342* me);

#endif // POSITION_CONN_SYNAPSE342_H_