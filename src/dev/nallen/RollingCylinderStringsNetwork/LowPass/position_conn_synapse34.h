#ifndef POSITION_CONN_SYNAPSE34_H_
#define POSITION_CONN_SYNAPSE34_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse34 States
enum PositionConnSynapse34States {
    POSITION_CONN_SYNAPSE34_L,
};

// position_conn_synapse34 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse34States state;
} PositionConnSynapse34;

// position_conn_synapse34 Initialisation function
void PositionConnSynapse34Init(PositionConnSynapse34* me);

// position_conn_synapse34 Execution function
void PositionConnSynapse34Run(PositionConnSynapse34* me);

#endif // POSITION_CONN_SYNAPSE34_H_