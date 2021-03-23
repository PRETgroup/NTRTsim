#ifndef POSITION_CONN_SYNAPSE217_H_
#define POSITION_CONN_SYNAPSE217_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse217 States
enum PositionConnSynapse217States {
    POSITION_CONN_SYNAPSE217_L,
};

// position_conn_synapse217 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse217States state;
} PositionConnSynapse217;

// position_conn_synapse217 Initialisation function
void PositionConnSynapse217Init(PositionConnSynapse217* me);

// position_conn_synapse217 Execution function
void PositionConnSynapse217Run(PositionConnSynapse217* me);

#endif // POSITION_CONN_SYNAPSE217_H_