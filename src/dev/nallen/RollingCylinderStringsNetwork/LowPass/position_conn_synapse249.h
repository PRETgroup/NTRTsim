#ifndef POSITION_CONN_SYNAPSE249_H_
#define POSITION_CONN_SYNAPSE249_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse249 States
enum PositionConnSynapse249States {
    POSITION_CONN_SYNAPSE249_L,
};

// position_conn_synapse249 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse249States state;
} PositionConnSynapse249;

// position_conn_synapse249 Initialisation function
void PositionConnSynapse249Init(PositionConnSynapse249* me);

// position_conn_synapse249 Execution function
void PositionConnSynapse249Run(PositionConnSynapse249* me);

#endif // POSITION_CONN_SYNAPSE249_H_