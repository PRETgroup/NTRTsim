#ifndef POSITION_CONN_SYNAPSE338_H_
#define POSITION_CONN_SYNAPSE338_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse338 States
enum PositionConnSynapse338States {
    POSITION_CONN_SYNAPSE338_L,
};

// position_conn_synapse338 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse338States state;
} PositionConnSynapse338;

// position_conn_synapse338 Initialisation function
void PositionConnSynapse338Init(PositionConnSynapse338* me);

// position_conn_synapse338 Execution function
void PositionConnSynapse338Run(PositionConnSynapse338* me);

#endif // POSITION_CONN_SYNAPSE338_H_