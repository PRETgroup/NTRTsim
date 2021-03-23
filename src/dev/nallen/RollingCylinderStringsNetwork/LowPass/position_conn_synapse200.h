#ifndef POSITION_CONN_SYNAPSE200_H_
#define POSITION_CONN_SYNAPSE200_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse200 States
enum PositionConnSynapse200States {
    POSITION_CONN_SYNAPSE200_L,
};

// position_conn_synapse200 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse200States state;
} PositionConnSynapse200;

// position_conn_synapse200 Initialisation function
void PositionConnSynapse200Init(PositionConnSynapse200* me);

// position_conn_synapse200 Execution function
void PositionConnSynapse200Run(PositionConnSynapse200* me);

#endif // POSITION_CONN_SYNAPSE200_H_