#ifndef POSITION_CONN_SYNAPSE202_H_
#define POSITION_CONN_SYNAPSE202_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse202 States
enum PositionConnSynapse202States {
    POSITION_CONN_SYNAPSE202_L,
};

// position_conn_synapse202 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse202States state;
} PositionConnSynapse202;

// position_conn_synapse202 Initialisation function
void PositionConnSynapse202Init(PositionConnSynapse202* me);

// position_conn_synapse202 Execution function
void PositionConnSynapse202Run(PositionConnSynapse202* me);

#endif // POSITION_CONN_SYNAPSE202_H_