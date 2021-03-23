#ifndef POSITION_CONN_SYNAPSE37_H_
#define POSITION_CONN_SYNAPSE37_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse37 States
enum PositionConnSynapse37States {
    POSITION_CONN_SYNAPSE37_L,
};

// position_conn_synapse37 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse37States state;
} PositionConnSynapse37;

// position_conn_synapse37 Initialisation function
void PositionConnSynapse37Init(PositionConnSynapse37* me);

// position_conn_synapse37 Execution function
void PositionConnSynapse37Run(PositionConnSynapse37* me);

#endif // POSITION_CONN_SYNAPSE37_H_