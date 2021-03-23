#ifndef POSITION_CONN_SYNAPSE350_H_
#define POSITION_CONN_SYNAPSE350_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse350 States
enum PositionConnSynapse350States {
    POSITION_CONN_SYNAPSE350_L,
};

// position_conn_synapse350 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse350States state;
} PositionConnSynapse350;

// position_conn_synapse350 Initialisation function
void PositionConnSynapse350Init(PositionConnSynapse350* me);

// position_conn_synapse350 Execution function
void PositionConnSynapse350Run(PositionConnSynapse350* me);

#endif // POSITION_CONN_SYNAPSE350_H_