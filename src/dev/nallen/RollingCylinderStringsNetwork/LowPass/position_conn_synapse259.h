#ifndef POSITION_CONN_SYNAPSE259_H_
#define POSITION_CONN_SYNAPSE259_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse259 States
enum PositionConnSynapse259States {
    POSITION_CONN_SYNAPSE259_L,
};

// position_conn_synapse259 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse259States state;
} PositionConnSynapse259;

// position_conn_synapse259 Initialisation function
void PositionConnSynapse259Init(PositionConnSynapse259* me);

// position_conn_synapse259 Execution function
void PositionConnSynapse259Run(PositionConnSynapse259* me);

#endif // POSITION_CONN_SYNAPSE259_H_