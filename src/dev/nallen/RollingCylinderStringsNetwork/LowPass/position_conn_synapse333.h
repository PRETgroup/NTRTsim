#ifndef POSITION_CONN_SYNAPSE333_H_
#define POSITION_CONN_SYNAPSE333_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse333 States
enum PositionConnSynapse333States {
    POSITION_CONN_SYNAPSE333_L,
};

// position_conn_synapse333 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse333States state;
} PositionConnSynapse333;

// position_conn_synapse333 Initialisation function
void PositionConnSynapse333Init(PositionConnSynapse333* me);

// position_conn_synapse333 Execution function
void PositionConnSynapse333Run(PositionConnSynapse333* me);

#endif // POSITION_CONN_SYNAPSE333_H_