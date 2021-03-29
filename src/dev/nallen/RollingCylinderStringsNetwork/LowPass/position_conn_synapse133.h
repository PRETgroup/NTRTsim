#ifndef POSITION_CONN_SYNAPSE133_H_
#define POSITION_CONN_SYNAPSE133_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse133 States
enum PositionConnSynapse133States {
    POSITION_CONN_SYNAPSE133_L,
};

// position_conn_synapse133 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse133States state;
} PositionConnSynapse133;

// position_conn_synapse133 Initialisation function
void PositionConnSynapse133Init(PositionConnSynapse133* me);

// position_conn_synapse133 Execution function
void PositionConnSynapse133Run(PositionConnSynapse133* me);

#endif // POSITION_CONN_SYNAPSE133_H_