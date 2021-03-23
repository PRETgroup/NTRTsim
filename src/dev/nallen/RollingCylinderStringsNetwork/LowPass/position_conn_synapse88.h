#ifndef POSITION_CONN_SYNAPSE88_H_
#define POSITION_CONN_SYNAPSE88_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse88 States
enum PositionConnSynapse88States {
    POSITION_CONN_SYNAPSE88_L,
};

// position_conn_synapse88 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse88States state;
} PositionConnSynapse88;

// position_conn_synapse88 Initialisation function
void PositionConnSynapse88Init(PositionConnSynapse88* me);

// position_conn_synapse88 Execution function
void PositionConnSynapse88Run(PositionConnSynapse88* me);

#endif // POSITION_CONN_SYNAPSE88_H_