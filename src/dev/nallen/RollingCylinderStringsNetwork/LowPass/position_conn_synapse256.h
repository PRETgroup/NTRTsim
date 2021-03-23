#ifndef POSITION_CONN_SYNAPSE256_H_
#define POSITION_CONN_SYNAPSE256_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse256 States
enum PositionConnSynapse256States {
    POSITION_CONN_SYNAPSE256_L,
};

// position_conn_synapse256 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse256States state;
} PositionConnSynapse256;

// position_conn_synapse256 Initialisation function
void PositionConnSynapse256Init(PositionConnSynapse256* me);

// position_conn_synapse256 Execution function
void PositionConnSynapse256Run(PositionConnSynapse256* me);

#endif // POSITION_CONN_SYNAPSE256_H_