#ifndef POSITION_CONN_SYNAPSE372_H_
#define POSITION_CONN_SYNAPSE372_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse372 States
enum PositionConnSynapse372States {
    POSITION_CONN_SYNAPSE372_L,
};

// position_conn_synapse372 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse372States state;
} PositionConnSynapse372;

// position_conn_synapse372 Initialisation function
void PositionConnSynapse372Init(PositionConnSynapse372* me);

// position_conn_synapse372 Execution function
void PositionConnSynapse372Run(PositionConnSynapse372* me);

#endif // POSITION_CONN_SYNAPSE372_H_