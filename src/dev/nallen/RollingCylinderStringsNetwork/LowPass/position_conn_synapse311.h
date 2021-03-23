#ifndef POSITION_CONN_SYNAPSE311_H_
#define POSITION_CONN_SYNAPSE311_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse311 States
enum PositionConnSynapse311States {
    POSITION_CONN_SYNAPSE311_L,
};

// position_conn_synapse311 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse311States state;
} PositionConnSynapse311;

// position_conn_synapse311 Initialisation function
void PositionConnSynapse311Init(PositionConnSynapse311* me);

// position_conn_synapse311 Execution function
void PositionConnSynapse311Run(PositionConnSynapse311* me);

#endif // POSITION_CONN_SYNAPSE311_H_