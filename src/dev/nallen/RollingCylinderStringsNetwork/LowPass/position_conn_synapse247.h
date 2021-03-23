#ifndef POSITION_CONN_SYNAPSE247_H_
#define POSITION_CONN_SYNAPSE247_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse247 States
enum PositionConnSynapse247States {
    POSITION_CONN_SYNAPSE247_L,
};

// position_conn_synapse247 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse247States state;
} PositionConnSynapse247;

// position_conn_synapse247 Initialisation function
void PositionConnSynapse247Init(PositionConnSynapse247* me);

// position_conn_synapse247 Execution function
void PositionConnSynapse247Run(PositionConnSynapse247* me);

#endif // POSITION_CONN_SYNAPSE247_H_