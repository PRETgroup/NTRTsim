#ifndef POSITION_CONN_SYNAPSE96_H_
#define POSITION_CONN_SYNAPSE96_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse96 States
enum PositionConnSynapse96States {
    POSITION_CONN_SYNAPSE96_L,
};

// position_conn_synapse96 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse96States state;
} PositionConnSynapse96;

// position_conn_synapse96 Initialisation function
void PositionConnSynapse96Init(PositionConnSynapse96* me);

// position_conn_synapse96 Execution function
void PositionConnSynapse96Run(PositionConnSynapse96* me);

#endif // POSITION_CONN_SYNAPSE96_H_