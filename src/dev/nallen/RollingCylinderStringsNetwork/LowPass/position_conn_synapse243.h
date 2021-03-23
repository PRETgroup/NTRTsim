#ifndef POSITION_CONN_SYNAPSE243_H_
#define POSITION_CONN_SYNAPSE243_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse243 States
enum PositionConnSynapse243States {
    POSITION_CONN_SYNAPSE243_L,
};

// position_conn_synapse243 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse243States state;
} PositionConnSynapse243;

// position_conn_synapse243 Initialisation function
void PositionConnSynapse243Init(PositionConnSynapse243* me);

// position_conn_synapse243 Execution function
void PositionConnSynapse243Run(PositionConnSynapse243* me);

#endif // POSITION_CONN_SYNAPSE243_H_