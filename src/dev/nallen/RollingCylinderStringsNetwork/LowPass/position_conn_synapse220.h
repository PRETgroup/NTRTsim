#ifndef POSITION_CONN_SYNAPSE220_H_
#define POSITION_CONN_SYNAPSE220_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse220 States
enum PositionConnSynapse220States {
    POSITION_CONN_SYNAPSE220_L,
};

// position_conn_synapse220 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse220States state;
} PositionConnSynapse220;

// position_conn_synapse220 Initialisation function
void PositionConnSynapse220Init(PositionConnSynapse220* me);

// position_conn_synapse220 Execution function
void PositionConnSynapse220Run(PositionConnSynapse220* me);

#endif // POSITION_CONN_SYNAPSE220_H_