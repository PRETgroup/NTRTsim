#ifndef POSITION_CONN_SYNAPSE49_H_
#define POSITION_CONN_SYNAPSE49_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse49 States
enum PositionConnSynapse49States {
    POSITION_CONN_SYNAPSE49_L,
};

// position_conn_synapse49 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse49States state;
} PositionConnSynapse49;

// position_conn_synapse49 Initialisation function
void PositionConnSynapse49Init(PositionConnSynapse49* me);

// position_conn_synapse49 Execution function
void PositionConnSynapse49Run(PositionConnSynapse49* me);

#endif // POSITION_CONN_SYNAPSE49_H_