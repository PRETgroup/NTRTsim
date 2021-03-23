#ifndef POSITION_CONN_SYNAPSE185_H_
#define POSITION_CONN_SYNAPSE185_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse185 States
enum PositionConnSynapse185States {
    POSITION_CONN_SYNAPSE185_L,
};

// position_conn_synapse185 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse185States state;
} PositionConnSynapse185;

// position_conn_synapse185 Initialisation function
void PositionConnSynapse185Init(PositionConnSynapse185* me);

// position_conn_synapse185 Execution function
void PositionConnSynapse185Run(PositionConnSynapse185* me);

#endif // POSITION_CONN_SYNAPSE185_H_