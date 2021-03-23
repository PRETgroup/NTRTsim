#ifndef POSITION_CONN_SYNAPSE297_H_
#define POSITION_CONN_SYNAPSE297_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse297 States
enum PositionConnSynapse297States {
    POSITION_CONN_SYNAPSE297_L,
};

// position_conn_synapse297 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse297States state;
} PositionConnSynapse297;

// position_conn_synapse297 Initialisation function
void PositionConnSynapse297Init(PositionConnSynapse297* me);

// position_conn_synapse297 Execution function
void PositionConnSynapse297Run(PositionConnSynapse297* me);

#endif // POSITION_CONN_SYNAPSE297_H_