#ifndef POSITION_CONN_SYNAPSE211_H_
#define POSITION_CONN_SYNAPSE211_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse211 States
enum PositionConnSynapse211States {
    POSITION_CONN_SYNAPSE211_L,
};

// position_conn_synapse211 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse211States state;
} PositionConnSynapse211;

// position_conn_synapse211 Initialisation function
void PositionConnSynapse211Init(PositionConnSynapse211* me);

// position_conn_synapse211 Execution function
void PositionConnSynapse211Run(PositionConnSynapse211* me);

#endif // POSITION_CONN_SYNAPSE211_H_