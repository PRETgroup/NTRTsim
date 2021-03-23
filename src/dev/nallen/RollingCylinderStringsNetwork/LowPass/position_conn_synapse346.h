#ifndef POSITION_CONN_SYNAPSE346_H_
#define POSITION_CONN_SYNAPSE346_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse346 States
enum PositionConnSynapse346States {
    POSITION_CONN_SYNAPSE346_L,
};

// position_conn_synapse346 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse346States state;
} PositionConnSynapse346;

// position_conn_synapse346 Initialisation function
void PositionConnSynapse346Init(PositionConnSynapse346* me);

// position_conn_synapse346 Execution function
void PositionConnSynapse346Run(PositionConnSynapse346* me);

#endif // POSITION_CONN_SYNAPSE346_H_