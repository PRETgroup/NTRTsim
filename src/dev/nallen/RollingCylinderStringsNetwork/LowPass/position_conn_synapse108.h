#ifndef POSITION_CONN_SYNAPSE108_H_
#define POSITION_CONN_SYNAPSE108_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse108 States
enum PositionConnSynapse108States {
    POSITION_CONN_SYNAPSE108_L,
};

// position_conn_synapse108 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse108States state;
} PositionConnSynapse108;

// position_conn_synapse108 Initialisation function
void PositionConnSynapse108Init(PositionConnSynapse108* me);

// position_conn_synapse108 Execution function
void PositionConnSynapse108Run(PositionConnSynapse108* me);

#endif // POSITION_CONN_SYNAPSE108_H_