#ifndef POSITION_CONN_SYNAPSE64_H_
#define POSITION_CONN_SYNAPSE64_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse64 States
enum PositionConnSynapse64States {
    POSITION_CONN_SYNAPSE64_L,
};

// position_conn_synapse64 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse64States state;
} PositionConnSynapse64;

// position_conn_synapse64 Initialisation function
void PositionConnSynapse64Init(PositionConnSynapse64* me);

// position_conn_synapse64 Execution function
void PositionConnSynapse64Run(PositionConnSynapse64* me);

#endif // POSITION_CONN_SYNAPSE64_H_