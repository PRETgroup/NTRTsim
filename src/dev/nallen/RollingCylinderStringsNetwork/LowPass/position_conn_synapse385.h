#ifndef POSITION_CONN_SYNAPSE385_H_
#define POSITION_CONN_SYNAPSE385_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse385 States
enum PositionConnSynapse385States {
    POSITION_CONN_SYNAPSE385_L,
};

// position_conn_synapse385 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse385States state;
} PositionConnSynapse385;

// position_conn_synapse385 Initialisation function
void PositionConnSynapse385Init(PositionConnSynapse385* me);

// position_conn_synapse385 Execution function
void PositionConnSynapse385Run(PositionConnSynapse385* me);

#endif // POSITION_CONN_SYNAPSE385_H_