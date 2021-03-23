#ifndef POSITION_CONN_SYNAPSE308_H_
#define POSITION_CONN_SYNAPSE308_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse308 States
enum PositionConnSynapse308States {
    POSITION_CONN_SYNAPSE308_L,
};

// position_conn_synapse308 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse308States state;
} PositionConnSynapse308;

// position_conn_synapse308 Initialisation function
void PositionConnSynapse308Init(PositionConnSynapse308* me);

// position_conn_synapse308 Execution function
void PositionConnSynapse308Run(PositionConnSynapse308* me);

#endif // POSITION_CONN_SYNAPSE308_H_