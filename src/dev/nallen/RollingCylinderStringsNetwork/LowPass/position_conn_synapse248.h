#ifndef POSITION_CONN_SYNAPSE248_H_
#define POSITION_CONN_SYNAPSE248_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse248 States
enum PositionConnSynapse248States {
    POSITION_CONN_SYNAPSE248_L,
};

// position_conn_synapse248 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse248States state;
} PositionConnSynapse248;

// position_conn_synapse248 Initialisation function
void PositionConnSynapse248Init(PositionConnSynapse248* me);

// position_conn_synapse248 Execution function
void PositionConnSynapse248Run(PositionConnSynapse248* me);

#endif // POSITION_CONN_SYNAPSE248_H_