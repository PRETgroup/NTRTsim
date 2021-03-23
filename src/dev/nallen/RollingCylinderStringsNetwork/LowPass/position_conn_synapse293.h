#ifndef POSITION_CONN_SYNAPSE293_H_
#define POSITION_CONN_SYNAPSE293_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse293 States
enum PositionConnSynapse293States {
    POSITION_CONN_SYNAPSE293_L,
};

// position_conn_synapse293 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse293States state;
} PositionConnSynapse293;

// position_conn_synapse293 Initialisation function
void PositionConnSynapse293Init(PositionConnSynapse293* me);

// position_conn_synapse293 Execution function
void PositionConnSynapse293Run(PositionConnSynapse293* me);

#endif // POSITION_CONN_SYNAPSE293_H_