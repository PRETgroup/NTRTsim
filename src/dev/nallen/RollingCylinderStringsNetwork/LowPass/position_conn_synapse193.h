#ifndef POSITION_CONN_SYNAPSE193_H_
#define POSITION_CONN_SYNAPSE193_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse193 States
enum PositionConnSynapse193States {
    POSITION_CONN_SYNAPSE193_L,
};

// position_conn_synapse193 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse193States state;
} PositionConnSynapse193;

// position_conn_synapse193 Initialisation function
void PositionConnSynapse193Init(PositionConnSynapse193* me);

// position_conn_synapse193 Execution function
void PositionConnSynapse193Run(PositionConnSynapse193* me);

#endif // POSITION_CONN_SYNAPSE193_H_