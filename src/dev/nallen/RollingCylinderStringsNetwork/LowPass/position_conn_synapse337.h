#ifndef POSITION_CONN_SYNAPSE337_H_
#define POSITION_CONN_SYNAPSE337_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse337 States
enum PositionConnSynapse337States {
    POSITION_CONN_SYNAPSE337_L,
};

// position_conn_synapse337 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse337States state;
} PositionConnSynapse337;

// position_conn_synapse337 Initialisation function
void PositionConnSynapse337Init(PositionConnSynapse337* me);

// position_conn_synapse337 Execution function
void PositionConnSynapse337Run(PositionConnSynapse337* me);

#endif // POSITION_CONN_SYNAPSE337_H_