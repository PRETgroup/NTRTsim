#ifndef POSITION_CONN_SYNAPSE33_H_
#define POSITION_CONN_SYNAPSE33_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse33 States
enum PositionConnSynapse33States {
    POSITION_CONN_SYNAPSE33_L,
};

// position_conn_synapse33 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse33States state;
} PositionConnSynapse33;

// position_conn_synapse33 Initialisation function
void PositionConnSynapse33Init(PositionConnSynapse33* me);

// position_conn_synapse33 Execution function
void PositionConnSynapse33Run(PositionConnSynapse33* me);

#endif // POSITION_CONN_SYNAPSE33_H_