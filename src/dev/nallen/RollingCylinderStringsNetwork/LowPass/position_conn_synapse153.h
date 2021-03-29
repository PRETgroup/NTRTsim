#ifndef POSITION_CONN_SYNAPSE153_H_
#define POSITION_CONN_SYNAPSE153_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse153 States
enum PositionConnSynapse153States {
    POSITION_CONN_SYNAPSE153_L,
};

// position_conn_synapse153 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse153States state;
} PositionConnSynapse153;

// position_conn_synapse153 Initialisation function
void PositionConnSynapse153Init(PositionConnSynapse153* me);

// position_conn_synapse153 Execution function
void PositionConnSynapse153Run(PositionConnSynapse153* me);

#endif // POSITION_CONN_SYNAPSE153_H_