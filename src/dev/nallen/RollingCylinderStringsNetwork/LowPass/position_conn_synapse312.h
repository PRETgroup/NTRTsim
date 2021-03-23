#ifndef POSITION_CONN_SYNAPSE312_H_
#define POSITION_CONN_SYNAPSE312_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse312 States
enum PositionConnSynapse312States {
    POSITION_CONN_SYNAPSE312_L,
};

// position_conn_synapse312 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse312States state;
} PositionConnSynapse312;

// position_conn_synapse312 Initialisation function
void PositionConnSynapse312Init(PositionConnSynapse312* me);

// position_conn_synapse312 Execution function
void PositionConnSynapse312Run(PositionConnSynapse312* me);

#endif // POSITION_CONN_SYNAPSE312_H_