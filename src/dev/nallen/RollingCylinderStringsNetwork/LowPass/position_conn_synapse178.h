#ifndef POSITION_CONN_SYNAPSE178_H_
#define POSITION_CONN_SYNAPSE178_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse178 States
enum PositionConnSynapse178States {
    POSITION_CONN_SYNAPSE178_L,
};

// position_conn_synapse178 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse178States state;
} PositionConnSynapse178;

// position_conn_synapse178 Initialisation function
void PositionConnSynapse178Init(PositionConnSynapse178* me);

// position_conn_synapse178 Execution function
void PositionConnSynapse178Run(PositionConnSynapse178* me);

#endif // POSITION_CONN_SYNAPSE178_H_