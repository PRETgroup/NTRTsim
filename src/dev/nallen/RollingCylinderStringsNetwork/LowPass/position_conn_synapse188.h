#ifndef POSITION_CONN_SYNAPSE188_H_
#define POSITION_CONN_SYNAPSE188_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse188 States
enum PositionConnSynapse188States {
    POSITION_CONN_SYNAPSE188_L,
};

// position_conn_synapse188 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse188States state;
} PositionConnSynapse188;

// position_conn_synapse188 Initialisation function
void PositionConnSynapse188Init(PositionConnSynapse188* me);

// position_conn_synapse188 Execution function
void PositionConnSynapse188Run(PositionConnSynapse188* me);

#endif // POSITION_CONN_SYNAPSE188_H_