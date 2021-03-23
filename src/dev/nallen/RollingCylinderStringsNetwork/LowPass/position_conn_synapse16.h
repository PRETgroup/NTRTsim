#ifndef POSITION_CONN_SYNAPSE16_H_
#define POSITION_CONN_SYNAPSE16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse16 States
enum PositionConnSynapse16States {
    POSITION_CONN_SYNAPSE16_L,
};

// position_conn_synapse16 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse16States state;
} PositionConnSynapse16;

// position_conn_synapse16 Initialisation function
void PositionConnSynapse16Init(PositionConnSynapse16* me);

// position_conn_synapse16 Execution function
void PositionConnSynapse16Run(PositionConnSynapse16* me);

#endif // POSITION_CONN_SYNAPSE16_H_