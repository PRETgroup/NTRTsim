#ifndef POSITION_CONN_SYNAPSE335_H_
#define POSITION_CONN_SYNAPSE335_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse335 States
enum PositionConnSynapse335States {
    POSITION_CONN_SYNAPSE335_L,
};

// position_conn_synapse335 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse335States state;
} PositionConnSynapse335;

// position_conn_synapse335 Initialisation function
void PositionConnSynapse335Init(PositionConnSynapse335* me);

// position_conn_synapse335 Execution function
void PositionConnSynapse335Run(PositionConnSynapse335* me);

#endif // POSITION_CONN_SYNAPSE335_H_