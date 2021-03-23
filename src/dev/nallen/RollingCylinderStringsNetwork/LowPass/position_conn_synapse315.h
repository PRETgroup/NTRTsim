#ifndef POSITION_CONN_SYNAPSE315_H_
#define POSITION_CONN_SYNAPSE315_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse315 States
enum PositionConnSynapse315States {
    POSITION_CONN_SYNAPSE315_L,
};

// position_conn_synapse315 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse315States state;
} PositionConnSynapse315;

// position_conn_synapse315 Initialisation function
void PositionConnSynapse315Init(PositionConnSynapse315* me);

// position_conn_synapse315 Execution function
void PositionConnSynapse315Run(PositionConnSynapse315* me);

#endif // POSITION_CONN_SYNAPSE315_H_