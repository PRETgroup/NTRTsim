#ifndef POSITION_CONN_SYNAPSE305_H_
#define POSITION_CONN_SYNAPSE305_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse305 States
enum PositionConnSynapse305States {
    POSITION_CONN_SYNAPSE305_L,
};

// position_conn_synapse305 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse305States state;
} PositionConnSynapse305;

// position_conn_synapse305 Initialisation function
void PositionConnSynapse305Init(PositionConnSynapse305* me);

// position_conn_synapse305 Execution function
void PositionConnSynapse305Run(PositionConnSynapse305* me);

#endif // POSITION_CONN_SYNAPSE305_H_