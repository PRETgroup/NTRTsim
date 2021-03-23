#ifndef POSITION_CONN_SYNAPSE93_H_
#define POSITION_CONN_SYNAPSE93_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse93 States
enum PositionConnSynapse93States {
    POSITION_CONN_SYNAPSE93_L,
};

// position_conn_synapse93 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse93States state;
} PositionConnSynapse93;

// position_conn_synapse93 Initialisation function
void PositionConnSynapse93Init(PositionConnSynapse93* me);

// position_conn_synapse93 Execution function
void PositionConnSynapse93Run(PositionConnSynapse93* me);

#endif // POSITION_CONN_SYNAPSE93_H_