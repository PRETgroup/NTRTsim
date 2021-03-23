#ifndef POSITION_CONN_SYNAPSE377_H_
#define POSITION_CONN_SYNAPSE377_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse377 States
enum PositionConnSynapse377States {
    POSITION_CONN_SYNAPSE377_L,
};

// position_conn_synapse377 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse377States state;
} PositionConnSynapse377;

// position_conn_synapse377 Initialisation function
void PositionConnSynapse377Init(PositionConnSynapse377* me);

// position_conn_synapse377 Execution function
void PositionConnSynapse377Run(PositionConnSynapse377* me);

#endif // POSITION_CONN_SYNAPSE377_H_