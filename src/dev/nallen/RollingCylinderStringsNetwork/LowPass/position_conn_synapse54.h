#ifndef POSITION_CONN_SYNAPSE54_H_
#define POSITION_CONN_SYNAPSE54_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse54 States
enum PositionConnSynapse54States {
    POSITION_CONN_SYNAPSE54_L,
};

// position_conn_synapse54 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse54States state;
} PositionConnSynapse54;

// position_conn_synapse54 Initialisation function
void PositionConnSynapse54Init(PositionConnSynapse54* me);

// position_conn_synapse54 Execution function
void PositionConnSynapse54Run(PositionConnSynapse54* me);

#endif // POSITION_CONN_SYNAPSE54_H_