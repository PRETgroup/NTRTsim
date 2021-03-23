#ifndef POSITION_CONN_SYNAPSE286_H_
#define POSITION_CONN_SYNAPSE286_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse286 States
enum PositionConnSynapse286States {
    POSITION_CONN_SYNAPSE286_L,
};

// position_conn_synapse286 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse286States state;
} PositionConnSynapse286;

// position_conn_synapse286 Initialisation function
void PositionConnSynapse286Init(PositionConnSynapse286* me);

// position_conn_synapse286 Execution function
void PositionConnSynapse286Run(PositionConnSynapse286* me);

#endif // POSITION_CONN_SYNAPSE286_H_