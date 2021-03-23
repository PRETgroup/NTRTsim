#ifndef POSITION_CONN_SYNAPSE328_H_
#define POSITION_CONN_SYNAPSE328_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse328 States
enum PositionConnSynapse328States {
    POSITION_CONN_SYNAPSE328_L,
};

// position_conn_synapse328 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse328States state;
} PositionConnSynapse328;

// position_conn_synapse328 Initialisation function
void PositionConnSynapse328Init(PositionConnSynapse328* me);

// position_conn_synapse328 Execution function
void PositionConnSynapse328Run(PositionConnSynapse328* me);

#endif // POSITION_CONN_SYNAPSE328_H_