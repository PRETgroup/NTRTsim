#ifndef POSITION_CONN_SYNAPSE105_H_
#define POSITION_CONN_SYNAPSE105_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse105 States
enum PositionConnSynapse105States {
    POSITION_CONN_SYNAPSE105_L,
};

// position_conn_synapse105 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse105States state;
} PositionConnSynapse105;

// position_conn_synapse105 Initialisation function
void PositionConnSynapse105Init(PositionConnSynapse105* me);

// position_conn_synapse105 Execution function
void PositionConnSynapse105Run(PositionConnSynapse105* me);

#endif // POSITION_CONN_SYNAPSE105_H_