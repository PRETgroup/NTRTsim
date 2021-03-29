#ifndef POSITION_CONN_SYNAPSE169_H_
#define POSITION_CONN_SYNAPSE169_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse169 States
enum PositionConnSynapse169States {
    POSITION_CONN_SYNAPSE169_L,
};

// position_conn_synapse169 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse169States state;
} PositionConnSynapse169;

// position_conn_synapse169 Initialisation function
void PositionConnSynapse169Init(PositionConnSynapse169* me);

// position_conn_synapse169 Execution function
void PositionConnSynapse169Run(PositionConnSynapse169* me);

#endif // POSITION_CONN_SYNAPSE169_H_