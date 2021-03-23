#ifndef POSITION_CONN_SYNAPSE363_H_
#define POSITION_CONN_SYNAPSE363_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse363 States
enum PositionConnSynapse363States {
    POSITION_CONN_SYNAPSE363_L,
};

// position_conn_synapse363 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse363States state;
} PositionConnSynapse363;

// position_conn_synapse363 Initialisation function
void PositionConnSynapse363Init(PositionConnSynapse363* me);

// position_conn_synapse363 Execution function
void PositionConnSynapse363Run(PositionConnSynapse363* me);

#endif // POSITION_CONN_SYNAPSE363_H_