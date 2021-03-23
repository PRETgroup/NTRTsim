#ifndef POSITION_CONN_SYNAPSE7_H_
#define POSITION_CONN_SYNAPSE7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse7 States
enum PositionConnSynapse7States {
    POSITION_CONN_SYNAPSE7_L,
};

// position_conn_synapse7 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse7States state;
} PositionConnSynapse7;

// position_conn_synapse7 Initialisation function
void PositionConnSynapse7Init(PositionConnSynapse7* me);

// position_conn_synapse7 Execution function
void PositionConnSynapse7Run(PositionConnSynapse7* me);

#endif // POSITION_CONN_SYNAPSE7_H_