#ifndef POSITION_CONN_SYNAPSE164_H_
#define POSITION_CONN_SYNAPSE164_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse164 States
enum PositionConnSynapse164States {
    POSITION_CONN_SYNAPSE164_L,
};

// position_conn_synapse164 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse164States state;
} PositionConnSynapse164;

// position_conn_synapse164 Initialisation function
void PositionConnSynapse164Init(PositionConnSynapse164* me);

// position_conn_synapse164 Execution function
void PositionConnSynapse164Run(PositionConnSynapse164* me);

#endif // POSITION_CONN_SYNAPSE164_H_