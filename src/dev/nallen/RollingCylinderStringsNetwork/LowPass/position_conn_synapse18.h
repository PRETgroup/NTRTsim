#ifndef POSITION_CONN_SYNAPSE18_H_
#define POSITION_CONN_SYNAPSE18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse18 States
enum PositionConnSynapse18States {
    POSITION_CONN_SYNAPSE18_L,
};

// position_conn_synapse18 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse18States state;
} PositionConnSynapse18;

// position_conn_synapse18 Initialisation function
void PositionConnSynapse18Init(PositionConnSynapse18* me);

// position_conn_synapse18 Execution function
void PositionConnSynapse18Run(PositionConnSynapse18* me);

#endif // POSITION_CONN_SYNAPSE18_H_