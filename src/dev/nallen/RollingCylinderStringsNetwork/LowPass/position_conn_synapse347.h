#ifndef POSITION_CONN_SYNAPSE347_H_
#define POSITION_CONN_SYNAPSE347_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse347 States
enum PositionConnSynapse347States {
    POSITION_CONN_SYNAPSE347_L,
};

// position_conn_synapse347 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse347States state;
} PositionConnSynapse347;

// position_conn_synapse347 Initialisation function
void PositionConnSynapse347Init(PositionConnSynapse347* me);

// position_conn_synapse347 Execution function
void PositionConnSynapse347Run(PositionConnSynapse347* me);

#endif // POSITION_CONN_SYNAPSE347_H_