#ifndef POSITION_CONN_SYNAPSE278_H_
#define POSITION_CONN_SYNAPSE278_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse278 States
enum PositionConnSynapse278States {
    POSITION_CONN_SYNAPSE278_L,
};

// position_conn_synapse278 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse278States state;
} PositionConnSynapse278;

// position_conn_synapse278 Initialisation function
void PositionConnSynapse278Init(PositionConnSynapse278* me);

// position_conn_synapse278 Execution function
void PositionConnSynapse278Run(PositionConnSynapse278* me);

#endif // POSITION_CONN_SYNAPSE278_H_