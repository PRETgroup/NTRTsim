#ifndef POSITION_CONN_SYNAPSE72_H_
#define POSITION_CONN_SYNAPSE72_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse72 States
enum PositionConnSynapse72States {
    POSITION_CONN_SYNAPSE72_L,
};

// position_conn_synapse72 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse72States state;
} PositionConnSynapse72;

// position_conn_synapse72 Initialisation function
void PositionConnSynapse72Init(PositionConnSynapse72* me);

// position_conn_synapse72 Execution function
void PositionConnSynapse72Run(PositionConnSynapse72* me);

#endif // POSITION_CONN_SYNAPSE72_H_