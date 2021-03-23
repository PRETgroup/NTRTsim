#ifndef POSITION_CONN_SYNAPSE36_H_
#define POSITION_CONN_SYNAPSE36_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse36 States
enum PositionConnSynapse36States {
    POSITION_CONN_SYNAPSE36_L,
};

// position_conn_synapse36 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse36States state;
} PositionConnSynapse36;

// position_conn_synapse36 Initialisation function
void PositionConnSynapse36Init(PositionConnSynapse36* me);

// position_conn_synapse36 Execution function
void PositionConnSynapse36Run(PositionConnSynapse36* me);

#endif // POSITION_CONN_SYNAPSE36_H_