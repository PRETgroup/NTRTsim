#ifndef POSITION_CONN_SYNAPSE250_H_
#define POSITION_CONN_SYNAPSE250_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse250 States
enum PositionConnSynapse250States {
    POSITION_CONN_SYNAPSE250_L,
};

// position_conn_synapse250 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse250States state;
} PositionConnSynapse250;

// position_conn_synapse250 Initialisation function
void PositionConnSynapse250Init(PositionConnSynapse250* me);

// position_conn_synapse250 Execution function
void PositionConnSynapse250Run(PositionConnSynapse250* me);

#endif // POSITION_CONN_SYNAPSE250_H_