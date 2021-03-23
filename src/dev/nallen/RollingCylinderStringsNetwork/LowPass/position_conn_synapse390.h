#ifndef POSITION_CONN_SYNAPSE390_H_
#define POSITION_CONN_SYNAPSE390_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse390 States
enum PositionConnSynapse390States {
    POSITION_CONN_SYNAPSE390_L,
};

// position_conn_synapse390 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse390States state;
} PositionConnSynapse390;

// position_conn_synapse390 Initialisation function
void PositionConnSynapse390Init(PositionConnSynapse390* me);

// position_conn_synapse390 Execution function
void PositionConnSynapse390Run(PositionConnSynapse390* me);

#endif // POSITION_CONN_SYNAPSE390_H_