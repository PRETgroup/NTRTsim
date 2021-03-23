#ifndef POSITION_CONN_SYNAPSE380_H_
#define POSITION_CONN_SYNAPSE380_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse380 States
enum PositionConnSynapse380States {
    POSITION_CONN_SYNAPSE380_L,
};

// position_conn_synapse380 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse380States state;
} PositionConnSynapse380;

// position_conn_synapse380 Initialisation function
void PositionConnSynapse380Init(PositionConnSynapse380* me);

// position_conn_synapse380 Execution function
void PositionConnSynapse380Run(PositionConnSynapse380* me);

#endif // POSITION_CONN_SYNAPSE380_H_