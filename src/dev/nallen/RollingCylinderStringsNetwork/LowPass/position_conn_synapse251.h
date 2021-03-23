#ifndef POSITION_CONN_SYNAPSE251_H_
#define POSITION_CONN_SYNAPSE251_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse251 States
enum PositionConnSynapse251States {
    POSITION_CONN_SYNAPSE251_L,
};

// position_conn_synapse251 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse251States state;
} PositionConnSynapse251;

// position_conn_synapse251 Initialisation function
void PositionConnSynapse251Init(PositionConnSynapse251* me);

// position_conn_synapse251 Execution function
void PositionConnSynapse251Run(PositionConnSynapse251* me);

#endif // POSITION_CONN_SYNAPSE251_H_