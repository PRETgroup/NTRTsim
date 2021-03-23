#ifndef POSITION_CONN_SYNAPSE100_H_
#define POSITION_CONN_SYNAPSE100_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse100 States
enum PositionConnSynapse100States {
    POSITION_CONN_SYNAPSE100_L,
};

// position_conn_synapse100 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse100States state;
} PositionConnSynapse100;

// position_conn_synapse100 Initialisation function
void PositionConnSynapse100Init(PositionConnSynapse100* me);

// position_conn_synapse100 Execution function
void PositionConnSynapse100Run(PositionConnSynapse100* me);

#endif // POSITION_CONN_SYNAPSE100_H_