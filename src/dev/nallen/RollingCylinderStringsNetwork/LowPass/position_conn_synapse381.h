#ifndef POSITION_CONN_SYNAPSE381_H_
#define POSITION_CONN_SYNAPSE381_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse381 States
enum PositionConnSynapse381States {
    POSITION_CONN_SYNAPSE381_L,
};

// position_conn_synapse381 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse381States state;
} PositionConnSynapse381;

// position_conn_synapse381 Initialisation function
void PositionConnSynapse381Init(PositionConnSynapse381* me);

// position_conn_synapse381 Execution function
void PositionConnSynapse381Run(PositionConnSynapse381* me);

#endif // POSITION_CONN_SYNAPSE381_H_