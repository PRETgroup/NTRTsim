#ifndef POSITION_CONN_SYNAPSE269_H_
#define POSITION_CONN_SYNAPSE269_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse269 States
enum PositionConnSynapse269States {
    POSITION_CONN_SYNAPSE269_L,
};

// position_conn_synapse269 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse269States state;
} PositionConnSynapse269;

// position_conn_synapse269 Initialisation function
void PositionConnSynapse269Init(PositionConnSynapse269* me);

// position_conn_synapse269 Execution function
void PositionConnSynapse269Run(PositionConnSynapse269* me);

#endif // POSITION_CONN_SYNAPSE269_H_