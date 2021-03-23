#ifndef POSITION_CONN_SYNAPSE43_H_
#define POSITION_CONN_SYNAPSE43_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse43 States
enum PositionConnSynapse43States {
    POSITION_CONN_SYNAPSE43_L,
};

// position_conn_synapse43 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse43States state;
} PositionConnSynapse43;

// position_conn_synapse43 Initialisation function
void PositionConnSynapse43Init(PositionConnSynapse43* me);

// position_conn_synapse43 Execution function
void PositionConnSynapse43Run(PositionConnSynapse43* me);

#endif // POSITION_CONN_SYNAPSE43_H_