#ifndef POSITION_CONN_SYNAPSE397_H_
#define POSITION_CONN_SYNAPSE397_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse397 States
enum PositionConnSynapse397States {
    POSITION_CONN_SYNAPSE397_L,
};

// position_conn_synapse397 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse397States state;
} PositionConnSynapse397;

// position_conn_synapse397 Initialisation function
void PositionConnSynapse397Init(PositionConnSynapse397* me);

// position_conn_synapse397 Execution function
void PositionConnSynapse397Run(PositionConnSynapse397* me);

#endif // POSITION_CONN_SYNAPSE397_H_