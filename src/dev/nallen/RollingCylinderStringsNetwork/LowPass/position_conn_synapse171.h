#ifndef POSITION_CONN_SYNAPSE171_H_
#define POSITION_CONN_SYNAPSE171_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse171 States
enum PositionConnSynapse171States {
    POSITION_CONN_SYNAPSE171_L,
};

// position_conn_synapse171 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse171States state;
} PositionConnSynapse171;

// position_conn_synapse171 Initialisation function
void PositionConnSynapse171Init(PositionConnSynapse171* me);

// position_conn_synapse171 Execution function
void PositionConnSynapse171Run(PositionConnSynapse171* me);

#endif // POSITION_CONN_SYNAPSE171_H_