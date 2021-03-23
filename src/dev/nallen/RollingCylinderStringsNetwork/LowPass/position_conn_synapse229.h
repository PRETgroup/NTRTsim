#ifndef POSITION_CONN_SYNAPSE229_H_
#define POSITION_CONN_SYNAPSE229_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse229 States
enum PositionConnSynapse229States {
    POSITION_CONN_SYNAPSE229_L,
};

// position_conn_synapse229 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse229States state;
} PositionConnSynapse229;

// position_conn_synapse229 Initialisation function
void PositionConnSynapse229Init(PositionConnSynapse229* me);

// position_conn_synapse229 Execution function
void PositionConnSynapse229Run(PositionConnSynapse229* me);

#endif // POSITION_CONN_SYNAPSE229_H_