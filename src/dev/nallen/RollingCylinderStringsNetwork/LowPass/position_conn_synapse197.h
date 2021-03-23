#ifndef POSITION_CONN_SYNAPSE197_H_
#define POSITION_CONN_SYNAPSE197_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse197 States
enum PositionConnSynapse197States {
    POSITION_CONN_SYNAPSE197_L,
};

// position_conn_synapse197 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse197States state;
} PositionConnSynapse197;

// position_conn_synapse197 Initialisation function
void PositionConnSynapse197Init(PositionConnSynapse197* me);

// position_conn_synapse197 Execution function
void PositionConnSynapse197Run(PositionConnSynapse197* me);

#endif // POSITION_CONN_SYNAPSE197_H_