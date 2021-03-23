#ifndef POSITION_CONN_SYNAPSE204_H_
#define POSITION_CONN_SYNAPSE204_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse204 States
enum PositionConnSynapse204States {
    POSITION_CONN_SYNAPSE204_L,
};

// position_conn_synapse204 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse204States state;
} PositionConnSynapse204;

// position_conn_synapse204 Initialisation function
void PositionConnSynapse204Init(PositionConnSynapse204* me);

// position_conn_synapse204 Execution function
void PositionConnSynapse204Run(PositionConnSynapse204* me);

#endif // POSITION_CONN_SYNAPSE204_H_