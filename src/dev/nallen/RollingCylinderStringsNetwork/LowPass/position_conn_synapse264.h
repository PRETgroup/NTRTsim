#ifndef POSITION_CONN_SYNAPSE264_H_
#define POSITION_CONN_SYNAPSE264_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse264 States
enum PositionConnSynapse264States {
    POSITION_CONN_SYNAPSE264_L,
};

// position_conn_synapse264 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse264States state;
} PositionConnSynapse264;

// position_conn_synapse264 Initialisation function
void PositionConnSynapse264Init(PositionConnSynapse264* me);

// position_conn_synapse264 Execution function
void PositionConnSynapse264Run(PositionConnSynapse264* me);

#endif // POSITION_CONN_SYNAPSE264_H_