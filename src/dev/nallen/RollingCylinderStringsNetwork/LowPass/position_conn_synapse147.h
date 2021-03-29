#ifndef POSITION_CONN_SYNAPSE147_H_
#define POSITION_CONN_SYNAPSE147_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse147 States
enum PositionConnSynapse147States {
    POSITION_CONN_SYNAPSE147_L,
};

// position_conn_synapse147 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse147States state;
} PositionConnSynapse147;

// position_conn_synapse147 Initialisation function
void PositionConnSynapse147Init(PositionConnSynapse147* me);

// position_conn_synapse147 Execution function
void PositionConnSynapse147Run(PositionConnSynapse147* me);

#endif // POSITION_CONN_SYNAPSE147_H_