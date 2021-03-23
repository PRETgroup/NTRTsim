#ifndef POSITION_CONN_SYNAPSE254_H_
#define POSITION_CONN_SYNAPSE254_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse254 States
enum PositionConnSynapse254States {
    POSITION_CONN_SYNAPSE254_L,
};

// position_conn_synapse254 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse254States state;
} PositionConnSynapse254;

// position_conn_synapse254 Initialisation function
void PositionConnSynapse254Init(PositionConnSynapse254* me);

// position_conn_synapse254 Execution function
void PositionConnSynapse254Run(PositionConnSynapse254* me);

#endif // POSITION_CONN_SYNAPSE254_H_