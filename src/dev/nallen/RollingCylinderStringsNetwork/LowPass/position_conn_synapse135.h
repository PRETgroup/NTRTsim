#ifndef POSITION_CONN_SYNAPSE135_H_
#define POSITION_CONN_SYNAPSE135_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse135 States
enum PositionConnSynapse135States {
    POSITION_CONN_SYNAPSE135_L,
};

// position_conn_synapse135 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse135States state;
} PositionConnSynapse135;

// position_conn_synapse135 Initialisation function
void PositionConnSynapse135Init(PositionConnSynapse135* me);

// position_conn_synapse135 Execution function
void PositionConnSynapse135Run(PositionConnSynapse135* me);

#endif // POSITION_CONN_SYNAPSE135_H_