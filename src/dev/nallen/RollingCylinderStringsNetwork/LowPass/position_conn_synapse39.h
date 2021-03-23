#ifndef POSITION_CONN_SYNAPSE39_H_
#define POSITION_CONN_SYNAPSE39_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse39 States
enum PositionConnSynapse39States {
    POSITION_CONN_SYNAPSE39_L,
};

// position_conn_synapse39 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse39States state;
} PositionConnSynapse39;

// position_conn_synapse39 Initialisation function
void PositionConnSynapse39Init(PositionConnSynapse39* me);

// position_conn_synapse39 Execution function
void PositionConnSynapse39Run(PositionConnSynapse39* me);

#endif // POSITION_CONN_SYNAPSE39_H_