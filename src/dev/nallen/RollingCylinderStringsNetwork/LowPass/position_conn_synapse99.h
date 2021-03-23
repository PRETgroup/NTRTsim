#ifndef POSITION_CONN_SYNAPSE99_H_
#define POSITION_CONN_SYNAPSE99_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse99 States
enum PositionConnSynapse99States {
    POSITION_CONN_SYNAPSE99_L,
};

// position_conn_synapse99 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse99States state;
} PositionConnSynapse99;

// position_conn_synapse99 Initialisation function
void PositionConnSynapse99Init(PositionConnSynapse99* me);

// position_conn_synapse99 Execution function
void PositionConnSynapse99Run(PositionConnSynapse99* me);

#endif // POSITION_CONN_SYNAPSE99_H_