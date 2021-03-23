#ifndef POSITION_CONN_SYNAPSE228_H_
#define POSITION_CONN_SYNAPSE228_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse228 States
enum PositionConnSynapse228States {
    POSITION_CONN_SYNAPSE228_L,
};

// position_conn_synapse228 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse228States state;
} PositionConnSynapse228;

// position_conn_synapse228 Initialisation function
void PositionConnSynapse228Init(PositionConnSynapse228* me);

// position_conn_synapse228 Execution function
void PositionConnSynapse228Run(PositionConnSynapse228* me);

#endif // POSITION_CONN_SYNAPSE228_H_