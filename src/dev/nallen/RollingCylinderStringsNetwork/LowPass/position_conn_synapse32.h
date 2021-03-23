#ifndef POSITION_CONN_SYNAPSE32_H_
#define POSITION_CONN_SYNAPSE32_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse32 States
enum PositionConnSynapse32States {
    POSITION_CONN_SYNAPSE32_L,
};

// position_conn_synapse32 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse32States state;
} PositionConnSynapse32;

// position_conn_synapse32 Initialisation function
void PositionConnSynapse32Init(PositionConnSynapse32* me);

// position_conn_synapse32 Execution function
void PositionConnSynapse32Run(PositionConnSynapse32* me);

#endif // POSITION_CONN_SYNAPSE32_H_