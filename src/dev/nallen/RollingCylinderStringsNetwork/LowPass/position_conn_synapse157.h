#ifndef POSITION_CONN_SYNAPSE157_H_
#define POSITION_CONN_SYNAPSE157_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse157 States
enum PositionConnSynapse157States {
    POSITION_CONN_SYNAPSE157_L,
};

// position_conn_synapse157 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse157States state;
} PositionConnSynapse157;

// position_conn_synapse157 Initialisation function
void PositionConnSynapse157Init(PositionConnSynapse157* me);

// position_conn_synapse157 Execution function
void PositionConnSynapse157Run(PositionConnSynapse157* me);

#endif // POSITION_CONN_SYNAPSE157_H_