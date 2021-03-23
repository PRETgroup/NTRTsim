#ifndef POSITION_CONN_SYNAPSE301_H_
#define POSITION_CONN_SYNAPSE301_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse301 States
enum PositionConnSynapse301States {
    POSITION_CONN_SYNAPSE301_L,
};

// position_conn_synapse301 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse301States state;
} PositionConnSynapse301;

// position_conn_synapse301 Initialisation function
void PositionConnSynapse301Init(PositionConnSynapse301* me);

// position_conn_synapse301 Execution function
void PositionConnSynapse301Run(PositionConnSynapse301* me);

#endif // POSITION_CONN_SYNAPSE301_H_