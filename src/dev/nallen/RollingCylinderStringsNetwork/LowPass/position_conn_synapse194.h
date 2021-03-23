#ifndef POSITION_CONN_SYNAPSE194_H_
#define POSITION_CONN_SYNAPSE194_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse194 States
enum PositionConnSynapse194States {
    POSITION_CONN_SYNAPSE194_L,
};

// position_conn_synapse194 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse194States state;
} PositionConnSynapse194;

// position_conn_synapse194 Initialisation function
void PositionConnSynapse194Init(PositionConnSynapse194* me);

// position_conn_synapse194 Execution function
void PositionConnSynapse194Run(PositionConnSynapse194* me);

#endif // POSITION_CONN_SYNAPSE194_H_