#ifndef POSITION_CONN_SYNAPSE14_H_
#define POSITION_CONN_SYNAPSE14_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse14 States
enum PositionConnSynapse14States {
    POSITION_CONN_SYNAPSE14_L,
};

// position_conn_synapse14 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse14States state;
} PositionConnSynapse14;

// position_conn_synapse14 Initialisation function
void PositionConnSynapse14Init(PositionConnSynapse14* me);

// position_conn_synapse14 Execution function
void PositionConnSynapse14Run(PositionConnSynapse14* me);

#endif // POSITION_CONN_SYNAPSE14_H_