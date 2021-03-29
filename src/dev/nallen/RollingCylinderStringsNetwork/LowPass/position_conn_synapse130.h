#ifndef POSITION_CONN_SYNAPSE130_H_
#define POSITION_CONN_SYNAPSE130_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse130 States
enum PositionConnSynapse130States {
    POSITION_CONN_SYNAPSE130_L,
};

// position_conn_synapse130 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse130States state;
} PositionConnSynapse130;

// position_conn_synapse130 Initialisation function
void PositionConnSynapse130Init(PositionConnSynapse130* me);

// position_conn_synapse130 Execution function
void PositionConnSynapse130Run(PositionConnSynapse130* me);

#endif // POSITION_CONN_SYNAPSE130_H_