#ifndef POSITION_CONN_SYNAPSE127_H_
#define POSITION_CONN_SYNAPSE127_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse127 States
enum PositionConnSynapse127States {
    POSITION_CONN_SYNAPSE127_L,
};

// position_conn_synapse127 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse127States state;
} PositionConnSynapse127;

// position_conn_synapse127 Initialisation function
void PositionConnSynapse127Init(PositionConnSynapse127* me);

// position_conn_synapse127 Execution function
void PositionConnSynapse127Run(PositionConnSynapse127* me);

#endif // POSITION_CONN_SYNAPSE127_H_