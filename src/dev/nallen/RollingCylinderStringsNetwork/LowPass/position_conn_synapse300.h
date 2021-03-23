#ifndef POSITION_CONN_SYNAPSE300_H_
#define POSITION_CONN_SYNAPSE300_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse300 States
enum PositionConnSynapse300States {
    POSITION_CONN_SYNAPSE300_L,
};

// position_conn_synapse300 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse300States state;
} PositionConnSynapse300;

// position_conn_synapse300 Initialisation function
void PositionConnSynapse300Init(PositionConnSynapse300* me);

// position_conn_synapse300 Execution function
void PositionConnSynapse300Run(PositionConnSynapse300* me);

#endif // POSITION_CONN_SYNAPSE300_H_