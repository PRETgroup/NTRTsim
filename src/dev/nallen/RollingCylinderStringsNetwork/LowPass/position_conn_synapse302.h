#ifndef POSITION_CONN_SYNAPSE302_H_
#define POSITION_CONN_SYNAPSE302_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse302 States
enum PositionConnSynapse302States {
    POSITION_CONN_SYNAPSE302_L,
};

// position_conn_synapse302 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse302States state;
} PositionConnSynapse302;

// position_conn_synapse302 Initialisation function
void PositionConnSynapse302Init(PositionConnSynapse302* me);

// position_conn_synapse302 Execution function
void PositionConnSynapse302Run(PositionConnSynapse302* me);

#endif // POSITION_CONN_SYNAPSE302_H_