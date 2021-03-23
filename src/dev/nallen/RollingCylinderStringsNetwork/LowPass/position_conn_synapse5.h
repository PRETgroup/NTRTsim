#ifndef POSITION_CONN_SYNAPSE5_H_
#define POSITION_CONN_SYNAPSE5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse5 States
enum PositionConnSynapse5States {
    POSITION_CONN_SYNAPSE5_L,
};

// position_conn_synapse5 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse5States state;
} PositionConnSynapse5;

// position_conn_synapse5 Initialisation function
void PositionConnSynapse5Init(PositionConnSynapse5* me);

// position_conn_synapse5 Execution function
void PositionConnSynapse5Run(PositionConnSynapse5* me);

#endif // POSITION_CONN_SYNAPSE5_H_