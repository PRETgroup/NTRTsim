#ifndef POSITION_CONN_SYNAPSE74_H_
#define POSITION_CONN_SYNAPSE74_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse74 States
enum PositionConnSynapse74States {
    POSITION_CONN_SYNAPSE74_L,
};

// position_conn_synapse74 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse74States state;
} PositionConnSynapse74;

// position_conn_synapse74 Initialisation function
void PositionConnSynapse74Init(PositionConnSynapse74* me);

// position_conn_synapse74 Execution function
void PositionConnSynapse74Run(PositionConnSynapse74* me);

#endif // POSITION_CONN_SYNAPSE74_H_