#ifndef POSITION_CONN_SYNAPSE113_H_
#define POSITION_CONN_SYNAPSE113_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse113 States
enum PositionConnSynapse113States {
    POSITION_CONN_SYNAPSE113_L,
};

// position_conn_synapse113 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse113States state;
} PositionConnSynapse113;

// position_conn_synapse113 Initialisation function
void PositionConnSynapse113Init(PositionConnSynapse113* me);

// position_conn_synapse113 Execution function
void PositionConnSynapse113Run(PositionConnSynapse113* me);

#endif // POSITION_CONN_SYNAPSE113_H_