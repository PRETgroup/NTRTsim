#ifndef POSITION_CONN_SYNAPSE167_H_
#define POSITION_CONN_SYNAPSE167_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse167 States
enum PositionConnSynapse167States {
    POSITION_CONN_SYNAPSE167_L,
};

// position_conn_synapse167 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse167States state;
} PositionConnSynapse167;

// position_conn_synapse167 Initialisation function
void PositionConnSynapse167Init(PositionConnSynapse167* me);

// position_conn_synapse167 Execution function
void PositionConnSynapse167Run(PositionConnSynapse167* me);

#endif // POSITION_CONN_SYNAPSE167_H_