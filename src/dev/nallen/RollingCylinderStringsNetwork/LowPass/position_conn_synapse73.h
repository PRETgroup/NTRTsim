#ifndef POSITION_CONN_SYNAPSE73_H_
#define POSITION_CONN_SYNAPSE73_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse73 States
enum PositionConnSynapse73States {
    POSITION_CONN_SYNAPSE73_L,
};

// position_conn_synapse73 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse73States state;
} PositionConnSynapse73;

// position_conn_synapse73 Initialisation function
void PositionConnSynapse73Init(PositionConnSynapse73* me);

// position_conn_synapse73 Execution function
void PositionConnSynapse73Run(PositionConnSynapse73* me);

#endif // POSITION_CONN_SYNAPSE73_H_