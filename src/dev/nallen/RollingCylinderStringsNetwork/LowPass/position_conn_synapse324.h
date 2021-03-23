#ifndef POSITION_CONN_SYNAPSE324_H_
#define POSITION_CONN_SYNAPSE324_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse324 States
enum PositionConnSynapse324States {
    POSITION_CONN_SYNAPSE324_L,
};

// position_conn_synapse324 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse324States state;
} PositionConnSynapse324;

// position_conn_synapse324 Initialisation function
void PositionConnSynapse324Init(PositionConnSynapse324* me);

// position_conn_synapse324 Execution function
void PositionConnSynapse324Run(PositionConnSynapse324* me);

#endif // POSITION_CONN_SYNAPSE324_H_