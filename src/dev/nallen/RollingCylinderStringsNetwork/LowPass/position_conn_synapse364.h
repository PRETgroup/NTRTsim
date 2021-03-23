#ifndef POSITION_CONN_SYNAPSE364_H_
#define POSITION_CONN_SYNAPSE364_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse364 States
enum PositionConnSynapse364States {
    POSITION_CONN_SYNAPSE364_L,
};

// position_conn_synapse364 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse364States state;
} PositionConnSynapse364;

// position_conn_synapse364 Initialisation function
void PositionConnSynapse364Init(PositionConnSynapse364* me);

// position_conn_synapse364 Execution function
void PositionConnSynapse364Run(PositionConnSynapse364* me);

#endif // POSITION_CONN_SYNAPSE364_H_