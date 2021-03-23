#ifndef POSITION_CONN_SYNAPSE267_H_
#define POSITION_CONN_SYNAPSE267_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse267 States
enum PositionConnSynapse267States {
    POSITION_CONN_SYNAPSE267_L,
};

// position_conn_synapse267 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse267States state;
} PositionConnSynapse267;

// position_conn_synapse267 Initialisation function
void PositionConnSynapse267Init(PositionConnSynapse267* me);

// position_conn_synapse267 Execution function
void PositionConnSynapse267Run(PositionConnSynapse267* me);

#endif // POSITION_CONN_SYNAPSE267_H_