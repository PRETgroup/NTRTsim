#ifndef POSITION_CONN_SYNAPSE138_H_
#define POSITION_CONN_SYNAPSE138_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse138 States
enum PositionConnSynapse138States {
    POSITION_CONN_SYNAPSE138_L,
};

// position_conn_synapse138 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse138States state;
} PositionConnSynapse138;

// position_conn_synapse138 Initialisation function
void PositionConnSynapse138Init(PositionConnSynapse138* me);

// position_conn_synapse138 Execution function
void PositionConnSynapse138Run(PositionConnSynapse138* me);

#endif // POSITION_CONN_SYNAPSE138_H_