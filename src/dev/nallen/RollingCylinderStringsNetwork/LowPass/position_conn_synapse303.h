#ifndef POSITION_CONN_SYNAPSE303_H_
#define POSITION_CONN_SYNAPSE303_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse303 States
enum PositionConnSynapse303States {
    POSITION_CONN_SYNAPSE303_L,
};

// position_conn_synapse303 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse303States state;
} PositionConnSynapse303;

// position_conn_synapse303 Initialisation function
void PositionConnSynapse303Init(PositionConnSynapse303* me);

// position_conn_synapse303 Execution function
void PositionConnSynapse303Run(PositionConnSynapse303* me);

#endif // POSITION_CONN_SYNAPSE303_H_