#ifndef POSITION_CONN_SYNAPSE265_H_
#define POSITION_CONN_SYNAPSE265_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse265 States
enum PositionConnSynapse265States {
    POSITION_CONN_SYNAPSE265_L,
};

// position_conn_synapse265 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse265States state;
} PositionConnSynapse265;

// position_conn_synapse265 Initialisation function
void PositionConnSynapse265Init(PositionConnSynapse265* me);

// position_conn_synapse265 Execution function
void PositionConnSynapse265Run(PositionConnSynapse265* me);

#endif // POSITION_CONN_SYNAPSE265_H_