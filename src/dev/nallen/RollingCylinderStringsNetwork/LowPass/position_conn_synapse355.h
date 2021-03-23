#ifndef POSITION_CONN_SYNAPSE355_H_
#define POSITION_CONN_SYNAPSE355_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse355 States
enum PositionConnSynapse355States {
    POSITION_CONN_SYNAPSE355_L,
};

// position_conn_synapse355 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse355States state;
} PositionConnSynapse355;

// position_conn_synapse355 Initialisation function
void PositionConnSynapse355Init(PositionConnSynapse355* me);

// position_conn_synapse355 Execution function
void PositionConnSynapse355Run(PositionConnSynapse355* me);

#endif // POSITION_CONN_SYNAPSE355_H_