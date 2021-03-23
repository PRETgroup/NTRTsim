#ifndef POSITION_CONN_SYNAPSE365_H_
#define POSITION_CONN_SYNAPSE365_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse365 States
enum PositionConnSynapse365States {
    POSITION_CONN_SYNAPSE365_L,
};

// position_conn_synapse365 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse365States state;
} PositionConnSynapse365;

// position_conn_synapse365 Initialisation function
void PositionConnSynapse365Init(PositionConnSynapse365* me);

// position_conn_synapse365 Execution function
void PositionConnSynapse365Run(PositionConnSynapse365* me);

#endif // POSITION_CONN_SYNAPSE365_H_