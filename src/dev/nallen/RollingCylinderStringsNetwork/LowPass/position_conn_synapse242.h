#ifndef POSITION_CONN_SYNAPSE242_H_
#define POSITION_CONN_SYNAPSE242_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse242 States
enum PositionConnSynapse242States {
    POSITION_CONN_SYNAPSE242_L,
};

// position_conn_synapse242 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse242States state;
} PositionConnSynapse242;

// position_conn_synapse242 Initialisation function
void PositionConnSynapse242Init(PositionConnSynapse242* me);

// position_conn_synapse242 Execution function
void PositionConnSynapse242Run(PositionConnSynapse242* me);

#endif // POSITION_CONN_SYNAPSE242_H_