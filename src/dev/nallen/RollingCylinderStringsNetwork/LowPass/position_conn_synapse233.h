#ifndef POSITION_CONN_SYNAPSE233_H_
#define POSITION_CONN_SYNAPSE233_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse233 States
enum PositionConnSynapse233States {
    POSITION_CONN_SYNAPSE233_L,
};

// position_conn_synapse233 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse233States state;
} PositionConnSynapse233;

// position_conn_synapse233 Initialisation function
void PositionConnSynapse233Init(PositionConnSynapse233* me);

// position_conn_synapse233 Execution function
void PositionConnSynapse233Run(PositionConnSynapse233* me);

#endif // POSITION_CONN_SYNAPSE233_H_