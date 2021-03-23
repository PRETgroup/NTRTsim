#ifndef POSITION_CONN_SYNAPSE386_H_
#define POSITION_CONN_SYNAPSE386_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse386 States
enum PositionConnSynapse386States {
    POSITION_CONN_SYNAPSE386_L,
};

// position_conn_synapse386 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse386States state;
} PositionConnSynapse386;

// position_conn_synapse386 Initialisation function
void PositionConnSynapse386Init(PositionConnSynapse386* me);

// position_conn_synapse386 Execution function
void PositionConnSynapse386Run(PositionConnSynapse386* me);

#endif // POSITION_CONN_SYNAPSE386_H_