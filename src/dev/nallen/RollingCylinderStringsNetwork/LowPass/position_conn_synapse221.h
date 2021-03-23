#ifndef POSITION_CONN_SYNAPSE221_H_
#define POSITION_CONN_SYNAPSE221_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse221 States
enum PositionConnSynapse221States {
    POSITION_CONN_SYNAPSE221_L,
};

// position_conn_synapse221 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse221States state;
} PositionConnSynapse221;

// position_conn_synapse221 Initialisation function
void PositionConnSynapse221Init(PositionConnSynapse221* me);

// position_conn_synapse221 Execution function
void PositionConnSynapse221Run(PositionConnSynapse221* me);

#endif // POSITION_CONN_SYNAPSE221_H_