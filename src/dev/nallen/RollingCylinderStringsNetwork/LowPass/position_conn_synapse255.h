#ifndef POSITION_CONN_SYNAPSE255_H_
#define POSITION_CONN_SYNAPSE255_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse255 States
enum PositionConnSynapse255States {
    POSITION_CONN_SYNAPSE255_L,
};

// position_conn_synapse255 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse255States state;
} PositionConnSynapse255;

// position_conn_synapse255 Initialisation function
void PositionConnSynapse255Init(PositionConnSynapse255* me);

// position_conn_synapse255 Execution function
void PositionConnSynapse255Run(PositionConnSynapse255* me);

#endif // POSITION_CONN_SYNAPSE255_H_