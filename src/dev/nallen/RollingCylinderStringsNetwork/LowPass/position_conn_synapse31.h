#ifndef POSITION_CONN_SYNAPSE31_H_
#define POSITION_CONN_SYNAPSE31_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse31 States
enum PositionConnSynapse31States {
    POSITION_CONN_SYNAPSE31_L,
};

// position_conn_synapse31 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse31States state;
} PositionConnSynapse31;

// position_conn_synapse31 Initialisation function
void PositionConnSynapse31Init(PositionConnSynapse31* me);

// position_conn_synapse31 Execution function
void PositionConnSynapse31Run(PositionConnSynapse31* me);

#endif // POSITION_CONN_SYNAPSE31_H_