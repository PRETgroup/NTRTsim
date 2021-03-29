#ifndef POSITION_CONN_SYNAPSE120_H_
#define POSITION_CONN_SYNAPSE120_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse120 States
enum PositionConnSynapse120States {
    POSITION_CONN_SYNAPSE120_L,
};

// position_conn_synapse120 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse120States state;
} PositionConnSynapse120;

// position_conn_synapse120 Initialisation function
void PositionConnSynapse120Init(PositionConnSynapse120* me);

// position_conn_synapse120 Execution function
void PositionConnSynapse120Run(PositionConnSynapse120* me);

#endif // POSITION_CONN_SYNAPSE120_H_