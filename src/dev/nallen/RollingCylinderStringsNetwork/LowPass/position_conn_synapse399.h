#ifndef POSITION_CONN_SYNAPSE399_H_
#define POSITION_CONN_SYNAPSE399_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse399 States
enum PositionConnSynapse399States {
    POSITION_CONN_SYNAPSE399_L,
};

// position_conn_synapse399 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse399States state;
} PositionConnSynapse399;

// position_conn_synapse399 Initialisation function
void PositionConnSynapse399Init(PositionConnSynapse399* me);

// position_conn_synapse399 Execution function
void PositionConnSynapse399Run(PositionConnSynapse399* me);

#endif // POSITION_CONN_SYNAPSE399_H_