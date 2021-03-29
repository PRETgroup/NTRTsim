#ifndef POSITION_CONN_SYNAPSE122_H_
#define POSITION_CONN_SYNAPSE122_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse122 States
enum PositionConnSynapse122States {
    POSITION_CONN_SYNAPSE122_L,
};

// position_conn_synapse122 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse122States state;
} PositionConnSynapse122;

// position_conn_synapse122 Initialisation function
void PositionConnSynapse122Init(PositionConnSynapse122* me);

// position_conn_synapse122 Execution function
void PositionConnSynapse122Run(PositionConnSynapse122* me);

#endif // POSITION_CONN_SYNAPSE122_H_