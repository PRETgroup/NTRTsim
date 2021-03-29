#ifndef POSITION_CONN_SYNAPSE102_H_
#define POSITION_CONN_SYNAPSE102_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse102 States
enum PositionConnSynapse102States {
    POSITION_CONN_SYNAPSE102_L,
};

// position_conn_synapse102 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse102States state;
} PositionConnSynapse102;

// position_conn_synapse102 Initialisation function
void PositionConnSynapse102Init(PositionConnSynapse102* me);

// position_conn_synapse102 Execution function
void PositionConnSynapse102Run(PositionConnSynapse102* me);

#endif // POSITION_CONN_SYNAPSE102_H_