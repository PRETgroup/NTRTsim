#ifndef POSITION_CONN_SYNAPSE90_H_
#define POSITION_CONN_SYNAPSE90_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse90 States
enum PositionConnSynapse90States {
    POSITION_CONN_SYNAPSE90_L,
};

// position_conn_synapse90 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse90States state;
} PositionConnSynapse90;

// position_conn_synapse90 Initialisation function
void PositionConnSynapse90Init(PositionConnSynapse90* me);

// position_conn_synapse90 Execution function
void PositionConnSynapse90Run(PositionConnSynapse90* me);

#endif // POSITION_CONN_SYNAPSE90_H_