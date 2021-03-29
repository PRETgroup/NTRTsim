#ifndef POSITION_CONN_SYNAPSE126_H_
#define POSITION_CONN_SYNAPSE126_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse126 States
enum PositionConnSynapse126States {
    POSITION_CONN_SYNAPSE126_L,
};

// position_conn_synapse126 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse126States state;
} PositionConnSynapse126;

// position_conn_synapse126 Initialisation function
void PositionConnSynapse126Init(PositionConnSynapse126* me);

// position_conn_synapse126 Execution function
void PositionConnSynapse126Run(PositionConnSynapse126* me);

#endif // POSITION_CONN_SYNAPSE126_H_