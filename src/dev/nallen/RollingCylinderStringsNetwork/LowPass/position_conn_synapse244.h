#ifndef POSITION_CONN_SYNAPSE244_H_
#define POSITION_CONN_SYNAPSE244_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse244 States
enum PositionConnSynapse244States {
    POSITION_CONN_SYNAPSE244_L,
};

// position_conn_synapse244 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse244States state;
} PositionConnSynapse244;

// position_conn_synapse244 Initialisation function
void PositionConnSynapse244Init(PositionConnSynapse244* me);

// position_conn_synapse244 Execution function
void PositionConnSynapse244Run(PositionConnSynapse244* me);

#endif // POSITION_CONN_SYNAPSE244_H_