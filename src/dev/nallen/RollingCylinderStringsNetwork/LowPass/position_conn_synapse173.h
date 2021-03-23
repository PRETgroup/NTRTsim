#ifndef POSITION_CONN_SYNAPSE173_H_
#define POSITION_CONN_SYNAPSE173_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse173 States
enum PositionConnSynapse173States {
    POSITION_CONN_SYNAPSE173_L,
};

// position_conn_synapse173 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse173States state;
} PositionConnSynapse173;

// position_conn_synapse173 Initialisation function
void PositionConnSynapse173Init(PositionConnSynapse173* me);

// position_conn_synapse173 Execution function
void PositionConnSynapse173Run(PositionConnSynapse173* me);

#endif // POSITION_CONN_SYNAPSE173_H_