#ifndef POSITION_CONN_SYNAPSE349_H_
#define POSITION_CONN_SYNAPSE349_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse349 States
enum PositionConnSynapse349States {
    POSITION_CONN_SYNAPSE349_L,
};

// position_conn_synapse349 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse349States state;
} PositionConnSynapse349;

// position_conn_synapse349 Initialisation function
void PositionConnSynapse349Init(PositionConnSynapse349* me);

// position_conn_synapse349 Execution function
void PositionConnSynapse349Run(PositionConnSynapse349* me);

#endif // POSITION_CONN_SYNAPSE349_H_