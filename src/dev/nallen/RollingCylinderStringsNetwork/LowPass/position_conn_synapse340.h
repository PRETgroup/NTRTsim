#ifndef POSITION_CONN_SYNAPSE340_H_
#define POSITION_CONN_SYNAPSE340_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse340 States
enum PositionConnSynapse340States {
    POSITION_CONN_SYNAPSE340_L,
};

// position_conn_synapse340 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse340States state;
} PositionConnSynapse340;

// position_conn_synapse340 Initialisation function
void PositionConnSynapse340Init(PositionConnSynapse340* me);

// position_conn_synapse340 Execution function
void PositionConnSynapse340Run(PositionConnSynapse340* me);

#endif // POSITION_CONN_SYNAPSE340_H_