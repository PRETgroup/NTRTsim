#ifndef POSITION_CONN_SYNAPSE343_H_
#define POSITION_CONN_SYNAPSE343_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse343 States
enum PositionConnSynapse343States {
    POSITION_CONN_SYNAPSE343_L,
};

// position_conn_synapse343 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse343States state;
} PositionConnSynapse343;

// position_conn_synapse343 Initialisation function
void PositionConnSynapse343Init(PositionConnSynapse343* me);

// position_conn_synapse343 Execution function
void PositionConnSynapse343Run(PositionConnSynapse343* me);

#endif // POSITION_CONN_SYNAPSE343_H_