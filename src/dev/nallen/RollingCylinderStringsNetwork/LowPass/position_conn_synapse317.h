#ifndef POSITION_CONN_SYNAPSE317_H_
#define POSITION_CONN_SYNAPSE317_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse317 States
enum PositionConnSynapse317States {
    POSITION_CONN_SYNAPSE317_L,
};

// position_conn_synapse317 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse317States state;
} PositionConnSynapse317;

// position_conn_synapse317 Initialisation function
void PositionConnSynapse317Init(PositionConnSynapse317* me);

// position_conn_synapse317 Execution function
void PositionConnSynapse317Run(PositionConnSynapse317* me);

#endif // POSITION_CONN_SYNAPSE317_H_