#ifndef POSITION_CONN_SYNAPSE306_H_
#define POSITION_CONN_SYNAPSE306_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse306 States
enum PositionConnSynapse306States {
    POSITION_CONN_SYNAPSE306_L,
};

// position_conn_synapse306 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse306States state;
} PositionConnSynapse306;

// position_conn_synapse306 Initialisation function
void PositionConnSynapse306Init(PositionConnSynapse306* me);

// position_conn_synapse306 Execution function
void PositionConnSynapse306Run(PositionConnSynapse306* me);

#endif // POSITION_CONN_SYNAPSE306_H_