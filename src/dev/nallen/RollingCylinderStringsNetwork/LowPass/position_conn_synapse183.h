#ifndef POSITION_CONN_SYNAPSE183_H_
#define POSITION_CONN_SYNAPSE183_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse183 States
enum PositionConnSynapse183States {
    POSITION_CONN_SYNAPSE183_L,
};

// position_conn_synapse183 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse183States state;
} PositionConnSynapse183;

// position_conn_synapse183 Initialisation function
void PositionConnSynapse183Init(PositionConnSynapse183* me);

// position_conn_synapse183 Execution function
void PositionConnSynapse183Run(PositionConnSynapse183* me);

#endif // POSITION_CONN_SYNAPSE183_H_