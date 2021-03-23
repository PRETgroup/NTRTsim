#ifndef POSITION_CONN_SYNAPSE47_H_
#define POSITION_CONN_SYNAPSE47_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse47 States
enum PositionConnSynapse47States {
    POSITION_CONN_SYNAPSE47_L,
};

// position_conn_synapse47 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse47States state;
} PositionConnSynapse47;

// position_conn_synapse47 Initialisation function
void PositionConnSynapse47Init(PositionConnSynapse47* me);

// position_conn_synapse47 Execution function
void PositionConnSynapse47Run(PositionConnSynapse47* me);

#endif // POSITION_CONN_SYNAPSE47_H_