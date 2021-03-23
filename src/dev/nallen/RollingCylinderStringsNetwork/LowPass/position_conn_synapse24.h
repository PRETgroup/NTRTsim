#ifndef POSITION_CONN_SYNAPSE24_H_
#define POSITION_CONN_SYNAPSE24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse24 States
enum PositionConnSynapse24States {
    POSITION_CONN_SYNAPSE24_L,
};

// position_conn_synapse24 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse24States state;
} PositionConnSynapse24;

// position_conn_synapse24 Initialisation function
void PositionConnSynapse24Init(PositionConnSynapse24* me);

// position_conn_synapse24 Execution function
void PositionConnSynapse24Run(PositionConnSynapse24* me);

#endif // POSITION_CONN_SYNAPSE24_H_