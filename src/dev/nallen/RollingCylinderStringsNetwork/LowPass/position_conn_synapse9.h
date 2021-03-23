#ifndef POSITION_CONN_SYNAPSE9_H_
#define POSITION_CONN_SYNAPSE9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse9 States
enum PositionConnSynapse9States {
    POSITION_CONN_SYNAPSE9_L,
};

// position_conn_synapse9 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse9States state;
} PositionConnSynapse9;

// position_conn_synapse9 Initialisation function
void PositionConnSynapse9Init(PositionConnSynapse9* me);

// position_conn_synapse9 Execution function
void PositionConnSynapse9Run(PositionConnSynapse9* me);

#endif // POSITION_CONN_SYNAPSE9_H_