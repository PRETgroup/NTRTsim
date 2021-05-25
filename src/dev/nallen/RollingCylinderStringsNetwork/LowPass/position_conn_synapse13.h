#ifndef POSITION_CONN_SYNAPSE13_H_
#define POSITION_CONN_SYNAPSE13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse13 States
enum PositionConnSynapse13States {
    POSITION_CONN_SYNAPSE13_L,
};

// position_conn_synapse13 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse13States state;
} PositionConnSynapse13;

// position_conn_synapse13 Initialisation function
void PositionConnSynapse13Init(PositionConnSynapse13* me);

// position_conn_synapse13 Execution function
void PositionConnSynapse13Run(PositionConnSynapse13* me);

#endif // POSITION_CONN_SYNAPSE13_H_