#ifndef POSITION_CONN_SYNAPSE344_H_
#define POSITION_CONN_SYNAPSE344_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse344 States
enum PositionConnSynapse344States {
    POSITION_CONN_SYNAPSE344_L,
};

// position_conn_synapse344 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse344States state;
} PositionConnSynapse344;

// position_conn_synapse344 Initialisation function
void PositionConnSynapse344Init(PositionConnSynapse344* me);

// position_conn_synapse344 Execution function
void PositionConnSynapse344Run(PositionConnSynapse344* me);

#endif // POSITION_CONN_SYNAPSE344_H_