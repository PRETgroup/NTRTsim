#ifndef POSITION_CONN_SYNAPSE215_H_
#define POSITION_CONN_SYNAPSE215_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse215 States
enum PositionConnSynapse215States {
    POSITION_CONN_SYNAPSE215_L,
};

// position_conn_synapse215 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse215States state;
} PositionConnSynapse215;

// position_conn_synapse215 Initialisation function
void PositionConnSynapse215Init(PositionConnSynapse215* me);

// position_conn_synapse215 Execution function
void PositionConnSynapse215Run(PositionConnSynapse215* me);

#endif // POSITION_CONN_SYNAPSE215_H_