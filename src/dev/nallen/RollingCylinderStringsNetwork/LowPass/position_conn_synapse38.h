#ifndef POSITION_CONN_SYNAPSE38_H_
#define POSITION_CONN_SYNAPSE38_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse38 States
enum PositionConnSynapse38States {
    POSITION_CONN_SYNAPSE38_L,
};

// position_conn_synapse38 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse38States state;
} PositionConnSynapse38;

// position_conn_synapse38 Initialisation function
void PositionConnSynapse38Init(PositionConnSynapse38* me);

// position_conn_synapse38 Execution function
void PositionConnSynapse38Run(PositionConnSynapse38* me);

#endif // POSITION_CONN_SYNAPSE38_H_