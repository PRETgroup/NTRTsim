#ifndef POSITION_CONN_SYNAPSE79_H_
#define POSITION_CONN_SYNAPSE79_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse79 States
enum PositionConnSynapse79States {
    POSITION_CONN_SYNAPSE79_L,
};

// position_conn_synapse79 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse79States state;
} PositionConnSynapse79;

// position_conn_synapse79 Initialisation function
void PositionConnSynapse79Init(PositionConnSynapse79* me);

// position_conn_synapse79 Execution function
void PositionConnSynapse79Run(PositionConnSynapse79* me);

#endif // POSITION_CONN_SYNAPSE79_H_