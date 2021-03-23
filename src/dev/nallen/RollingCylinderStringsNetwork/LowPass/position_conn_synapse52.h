#ifndef POSITION_CONN_SYNAPSE52_H_
#define POSITION_CONN_SYNAPSE52_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse52 States
enum PositionConnSynapse52States {
    POSITION_CONN_SYNAPSE52_L,
};

// position_conn_synapse52 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse52States state;
} PositionConnSynapse52;

// position_conn_synapse52 Initialisation function
void PositionConnSynapse52Init(PositionConnSynapse52* me);

// position_conn_synapse52 Execution function
void PositionConnSynapse52Run(PositionConnSynapse52* me);

#endif // POSITION_CONN_SYNAPSE52_H_