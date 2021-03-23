#ifndef POSITION_CONN_SYNAPSE12_H_
#define POSITION_CONN_SYNAPSE12_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse12 States
enum PositionConnSynapse12States {
    POSITION_CONN_SYNAPSE12_L,
};

// position_conn_synapse12 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse12States state;
} PositionConnSynapse12;

// position_conn_synapse12 Initialisation function
void PositionConnSynapse12Init(PositionConnSynapse12* me);

// position_conn_synapse12 Execution function
void PositionConnSynapse12Run(PositionConnSynapse12* me);

#endif // POSITION_CONN_SYNAPSE12_H_