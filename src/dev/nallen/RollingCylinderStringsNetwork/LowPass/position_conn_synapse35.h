#ifndef POSITION_CONN_SYNAPSE35_H_
#define POSITION_CONN_SYNAPSE35_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse35 States
enum PositionConnSynapse35States {
    POSITION_CONN_SYNAPSE35_L,
};

// position_conn_synapse35 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse35States state;
} PositionConnSynapse35;

// position_conn_synapse35 Initialisation function
void PositionConnSynapse35Init(PositionConnSynapse35* me);

// position_conn_synapse35 Execution function
void PositionConnSynapse35Run(PositionConnSynapse35* me);

#endif // POSITION_CONN_SYNAPSE35_H_