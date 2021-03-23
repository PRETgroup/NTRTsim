#ifndef POSITION_CONN_SYNAPSE277_H_
#define POSITION_CONN_SYNAPSE277_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse277 States
enum PositionConnSynapse277States {
    POSITION_CONN_SYNAPSE277_L,
};

// position_conn_synapse277 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse277States state;
} PositionConnSynapse277;

// position_conn_synapse277 Initialisation function
void PositionConnSynapse277Init(PositionConnSynapse277* me);

// position_conn_synapse277 Execution function
void PositionConnSynapse277Run(PositionConnSynapse277* me);

#endif // POSITION_CONN_SYNAPSE277_H_