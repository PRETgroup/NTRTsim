#ifndef POSITION_CONN_SYNAPSE392_H_
#define POSITION_CONN_SYNAPSE392_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse392 States
enum PositionConnSynapse392States {
    POSITION_CONN_SYNAPSE392_L,
};

// position_conn_synapse392 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse392States state;
} PositionConnSynapse392;

// position_conn_synapse392 Initialisation function
void PositionConnSynapse392Init(PositionConnSynapse392* me);

// position_conn_synapse392 Execution function
void PositionConnSynapse392Run(PositionConnSynapse392* me);

#endif // POSITION_CONN_SYNAPSE392_H_