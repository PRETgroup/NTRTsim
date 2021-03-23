#ifndef POSITION_CONN_SYNAPSE89_H_
#define POSITION_CONN_SYNAPSE89_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse89 States
enum PositionConnSynapse89States {
    POSITION_CONN_SYNAPSE89_L,
};

// position_conn_synapse89 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse89States state;
} PositionConnSynapse89;

// position_conn_synapse89 Initialisation function
void PositionConnSynapse89Init(PositionConnSynapse89* me);

// position_conn_synapse89 Execution function
void PositionConnSynapse89Run(PositionConnSynapse89* me);

#endif // POSITION_CONN_SYNAPSE89_H_