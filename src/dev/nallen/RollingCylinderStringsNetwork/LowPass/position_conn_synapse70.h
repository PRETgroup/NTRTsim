#ifndef POSITION_CONN_SYNAPSE70_H_
#define POSITION_CONN_SYNAPSE70_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse70 States
enum PositionConnSynapse70States {
    POSITION_CONN_SYNAPSE70_L,
};

// position_conn_synapse70 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse70States state;
} PositionConnSynapse70;

// position_conn_synapse70 Initialisation function
void PositionConnSynapse70Init(PositionConnSynapse70* me);

// position_conn_synapse70 Execution function
void PositionConnSynapse70Run(PositionConnSynapse70* me);

#endif // POSITION_CONN_SYNAPSE70_H_