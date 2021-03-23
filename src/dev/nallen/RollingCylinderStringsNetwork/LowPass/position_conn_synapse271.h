#ifndef POSITION_CONN_SYNAPSE271_H_
#define POSITION_CONN_SYNAPSE271_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse271 States
enum PositionConnSynapse271States {
    POSITION_CONN_SYNAPSE271_L,
};

// position_conn_synapse271 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse271States state;
} PositionConnSynapse271;

// position_conn_synapse271 Initialisation function
void PositionConnSynapse271Init(PositionConnSynapse271* me);

// position_conn_synapse271 Execution function
void PositionConnSynapse271Run(PositionConnSynapse271* me);

#endif // POSITION_CONN_SYNAPSE271_H_