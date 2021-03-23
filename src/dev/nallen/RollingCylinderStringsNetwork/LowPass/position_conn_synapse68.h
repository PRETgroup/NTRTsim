#ifndef POSITION_CONN_SYNAPSE68_H_
#define POSITION_CONN_SYNAPSE68_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse68 States
enum PositionConnSynapse68States {
    POSITION_CONN_SYNAPSE68_L,
};

// position_conn_synapse68 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse68States state;
} PositionConnSynapse68;

// position_conn_synapse68 Initialisation function
void PositionConnSynapse68Init(PositionConnSynapse68* me);

// position_conn_synapse68 Execution function
void PositionConnSynapse68Run(PositionConnSynapse68* me);

#endif // POSITION_CONN_SYNAPSE68_H_