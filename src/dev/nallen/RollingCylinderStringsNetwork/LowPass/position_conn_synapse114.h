#ifndef POSITION_CONN_SYNAPSE114_H_
#define POSITION_CONN_SYNAPSE114_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse114 States
enum PositionConnSynapse114States {
    POSITION_CONN_SYNAPSE114_L,
};

// position_conn_synapse114 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse114States state;
} PositionConnSynapse114;

// position_conn_synapse114 Initialisation function
void PositionConnSynapse114Init(PositionConnSynapse114* me);

// position_conn_synapse114 Execution function
void PositionConnSynapse114Run(PositionConnSynapse114* me);

#endif // POSITION_CONN_SYNAPSE114_H_