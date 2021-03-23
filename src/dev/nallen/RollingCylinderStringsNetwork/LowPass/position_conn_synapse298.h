#ifndef POSITION_CONN_SYNAPSE298_H_
#define POSITION_CONN_SYNAPSE298_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse298 States
enum PositionConnSynapse298States {
    POSITION_CONN_SYNAPSE298_L,
};

// position_conn_synapse298 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse298States state;
} PositionConnSynapse298;

// position_conn_synapse298 Initialisation function
void PositionConnSynapse298Init(PositionConnSynapse298* me);

// position_conn_synapse298 Execution function
void PositionConnSynapse298Run(PositionConnSynapse298* me);

#endif // POSITION_CONN_SYNAPSE298_H_