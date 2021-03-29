#ifndef POSITION_CONN_SYNAPSE152_H_
#define POSITION_CONN_SYNAPSE152_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse152 States
enum PositionConnSynapse152States {
    POSITION_CONN_SYNAPSE152_L,
};

// position_conn_synapse152 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse152States state;
} PositionConnSynapse152;

// position_conn_synapse152 Initialisation function
void PositionConnSynapse152Init(PositionConnSynapse152* me);

// position_conn_synapse152 Execution function
void PositionConnSynapse152Run(PositionConnSynapse152* me);

#endif // POSITION_CONN_SYNAPSE152_H_