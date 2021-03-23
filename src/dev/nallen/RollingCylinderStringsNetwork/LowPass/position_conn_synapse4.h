#ifndef POSITION_CONN_SYNAPSE4_H_
#define POSITION_CONN_SYNAPSE4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse4 States
enum PositionConnSynapse4States {
    POSITION_CONN_SYNAPSE4_L,
};

// position_conn_synapse4 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse4States state;
} PositionConnSynapse4;

// position_conn_synapse4 Initialisation function
void PositionConnSynapse4Init(PositionConnSynapse4* me);

// position_conn_synapse4 Execution function
void PositionConnSynapse4Run(PositionConnSynapse4* me);

#endif // POSITION_CONN_SYNAPSE4_H_