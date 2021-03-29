#ifndef POSITION_CONN_SYNAPSE118_H_
#define POSITION_CONN_SYNAPSE118_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse118 States
enum PositionConnSynapse118States {
    POSITION_CONN_SYNAPSE118_L,
};

// position_conn_synapse118 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse118States state;
} PositionConnSynapse118;

// position_conn_synapse118 Initialisation function
void PositionConnSynapse118Init(PositionConnSynapse118* me);

// position_conn_synapse118 Execution function
void PositionConnSynapse118Run(PositionConnSynapse118* me);

#endif // POSITION_CONN_SYNAPSE118_H_