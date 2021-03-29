#ifndef POSITION_CONN_SYNAPSE131_H_
#define POSITION_CONN_SYNAPSE131_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse131 States
enum PositionConnSynapse131States {
    POSITION_CONN_SYNAPSE131_L,
};

// position_conn_synapse131 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse131States state;
} PositionConnSynapse131;

// position_conn_synapse131 Initialisation function
void PositionConnSynapse131Init(PositionConnSynapse131* me);

// position_conn_synapse131 Execution function
void PositionConnSynapse131Run(PositionConnSynapse131* me);

#endif // POSITION_CONN_SYNAPSE131_H_