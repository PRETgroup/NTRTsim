#ifndef POSITION_CONN_SYNAPSE23_H_
#define POSITION_CONN_SYNAPSE23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse23 States
enum PositionConnSynapse23States {
    POSITION_CONN_SYNAPSE23_L,
};

// position_conn_synapse23 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse23States state;
} PositionConnSynapse23;

// position_conn_synapse23 Initialisation function
void PositionConnSynapse23Init(PositionConnSynapse23* me);

// position_conn_synapse23 Execution function
void PositionConnSynapse23Run(PositionConnSynapse23* me);

#endif // POSITION_CONN_SYNAPSE23_H_