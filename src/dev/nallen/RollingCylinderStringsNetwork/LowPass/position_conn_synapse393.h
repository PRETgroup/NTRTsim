#ifndef POSITION_CONN_SYNAPSE393_H_
#define POSITION_CONN_SYNAPSE393_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse393 States
enum PositionConnSynapse393States {
    POSITION_CONN_SYNAPSE393_L,
};

// position_conn_synapse393 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse393States state;
} PositionConnSynapse393;

// position_conn_synapse393 Initialisation function
void PositionConnSynapse393Init(PositionConnSynapse393* me);

// position_conn_synapse393 Execution function
void PositionConnSynapse393Run(PositionConnSynapse393* me);

#endif // POSITION_CONN_SYNAPSE393_H_