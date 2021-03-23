#ifndef POSITION_CONN_SYNAPSE161_H_
#define POSITION_CONN_SYNAPSE161_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse161 States
enum PositionConnSynapse161States {
    POSITION_CONN_SYNAPSE161_L,
};

// position_conn_synapse161 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse161States state;
} PositionConnSynapse161;

// position_conn_synapse161 Initialisation function
void PositionConnSynapse161Init(PositionConnSynapse161* me);

// position_conn_synapse161 Execution function
void PositionConnSynapse161Run(PositionConnSynapse161* me);

#endif // POSITION_CONN_SYNAPSE161_H_