#ifndef POSITION_CONN_SYNAPSE237_H_
#define POSITION_CONN_SYNAPSE237_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse237 States
enum PositionConnSynapse237States {
    POSITION_CONN_SYNAPSE237_L,
};

// position_conn_synapse237 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse237States state;
} PositionConnSynapse237;

// position_conn_synapse237 Initialisation function
void PositionConnSynapse237Init(PositionConnSynapse237* me);

// position_conn_synapse237 Execution function
void PositionConnSynapse237Run(PositionConnSynapse237* me);

#endif // POSITION_CONN_SYNAPSE237_H_