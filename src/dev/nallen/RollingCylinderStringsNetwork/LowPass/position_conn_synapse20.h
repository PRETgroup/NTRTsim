#ifndef POSITION_CONN_SYNAPSE20_H_
#define POSITION_CONN_SYNAPSE20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse20 States
enum PositionConnSynapse20States {
    POSITION_CONN_SYNAPSE20_L,
};

// position_conn_synapse20 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse20States state;
} PositionConnSynapse20;

// position_conn_synapse20 Initialisation function
void PositionConnSynapse20Init(PositionConnSynapse20* me);

// position_conn_synapse20 Execution function
void PositionConnSynapse20Run(PositionConnSynapse20* me);

#endif // POSITION_CONN_SYNAPSE20_H_