#ifndef POSITION_CONN_SYNAPSE41_H_
#define POSITION_CONN_SYNAPSE41_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse41 States
enum PositionConnSynapse41States {
    POSITION_CONN_SYNAPSE41_L,
};

// position_conn_synapse41 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse41States state;
} PositionConnSynapse41;

// position_conn_synapse41 Initialisation function
void PositionConnSynapse41Init(PositionConnSynapse41* me);

// position_conn_synapse41 Execution function
void PositionConnSynapse41Run(PositionConnSynapse41* me);

#endif // POSITION_CONN_SYNAPSE41_H_