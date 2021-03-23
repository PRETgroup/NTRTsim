#ifndef POSITION_CONN_SYNAPSE389_H_
#define POSITION_CONN_SYNAPSE389_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse389 States
enum PositionConnSynapse389States {
    POSITION_CONN_SYNAPSE389_L,
};

// position_conn_synapse389 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse389States state;
} PositionConnSynapse389;

// position_conn_synapse389 Initialisation function
void PositionConnSynapse389Init(PositionConnSynapse389* me);

// position_conn_synapse389 Execution function
void PositionConnSynapse389Run(PositionConnSynapse389* me);

#endif // POSITION_CONN_SYNAPSE389_H_