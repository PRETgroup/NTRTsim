#ifndef POSITION_CONN_SYNAPSE276_H_
#define POSITION_CONN_SYNAPSE276_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse276 States
enum PositionConnSynapse276States {
    POSITION_CONN_SYNAPSE276_L,
};

// position_conn_synapse276 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse276States state;
} PositionConnSynapse276;

// position_conn_synapse276 Initialisation function
void PositionConnSynapse276Init(PositionConnSynapse276* me);

// position_conn_synapse276 Execution function
void PositionConnSynapse276Run(PositionConnSynapse276* me);

#endif // POSITION_CONN_SYNAPSE276_H_