#ifndef POSITION_CONN_SYNAPSE62_H_
#define POSITION_CONN_SYNAPSE62_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse62 States
enum PositionConnSynapse62States {
    POSITION_CONN_SYNAPSE62_L,
};

// position_conn_synapse62 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse62States state;
} PositionConnSynapse62;

// position_conn_synapse62 Initialisation function
void PositionConnSynapse62Init(PositionConnSynapse62* me);

// position_conn_synapse62 Execution function
void PositionConnSynapse62Run(PositionConnSynapse62* me);

#endif // POSITION_CONN_SYNAPSE62_H_