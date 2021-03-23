#ifndef POSITION_CONN_SYNAPSE396_H_
#define POSITION_CONN_SYNAPSE396_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse396 States
enum PositionConnSynapse396States {
    POSITION_CONN_SYNAPSE396_L,
};

// position_conn_synapse396 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse396States state;
} PositionConnSynapse396;

// position_conn_synapse396 Initialisation function
void PositionConnSynapse396Init(PositionConnSynapse396* me);

// position_conn_synapse396 Execution function
void PositionConnSynapse396Run(PositionConnSynapse396* me);

#endif // POSITION_CONN_SYNAPSE396_H_