#ifndef POSITION_CONN_SYNAPSE19_H_
#define POSITION_CONN_SYNAPSE19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse19 States
enum PositionConnSynapse19States {
    POSITION_CONN_SYNAPSE19_L,
};

// position_conn_synapse19 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse19States state;
} PositionConnSynapse19;

// position_conn_synapse19 Initialisation function
void PositionConnSynapse19Init(PositionConnSynapse19* me);

// position_conn_synapse19 Execution function
void PositionConnSynapse19Run(PositionConnSynapse19* me);

#endif // POSITION_CONN_SYNAPSE19_H_