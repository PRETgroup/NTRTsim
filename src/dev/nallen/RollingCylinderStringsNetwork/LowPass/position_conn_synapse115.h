#ifndef POSITION_CONN_SYNAPSE115_H_
#define POSITION_CONN_SYNAPSE115_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse115 States
enum PositionConnSynapse115States {
    POSITION_CONN_SYNAPSE115_L,
};

// position_conn_synapse115 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse115States state;
} PositionConnSynapse115;

// position_conn_synapse115 Initialisation function
void PositionConnSynapse115Init(PositionConnSynapse115* me);

// position_conn_synapse115 Execution function
void PositionConnSynapse115Run(PositionConnSynapse115* me);

#endif // POSITION_CONN_SYNAPSE115_H_