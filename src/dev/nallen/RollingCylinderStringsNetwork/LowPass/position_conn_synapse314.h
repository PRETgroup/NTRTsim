#ifndef POSITION_CONN_SYNAPSE314_H_
#define POSITION_CONN_SYNAPSE314_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse314 States
enum PositionConnSynapse314States {
    POSITION_CONN_SYNAPSE314_L,
};

// position_conn_synapse314 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse314States state;
} PositionConnSynapse314;

// position_conn_synapse314 Initialisation function
void PositionConnSynapse314Init(PositionConnSynapse314* me);

// position_conn_synapse314 Execution function
void PositionConnSynapse314Run(PositionConnSynapse314* me);

#endif // POSITION_CONN_SYNAPSE314_H_