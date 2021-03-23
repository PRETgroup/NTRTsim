#ifndef POSITION_CONN_SYNAPSE339_H_
#define POSITION_CONN_SYNAPSE339_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse339 States
enum PositionConnSynapse339States {
    POSITION_CONN_SYNAPSE339_L,
};

// position_conn_synapse339 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse339States state;
} PositionConnSynapse339;

// position_conn_synapse339 Initialisation function
void PositionConnSynapse339Init(PositionConnSynapse339* me);

// position_conn_synapse339 Execution function
void PositionConnSynapse339Run(PositionConnSynapse339* me);

#endif // POSITION_CONN_SYNAPSE339_H_