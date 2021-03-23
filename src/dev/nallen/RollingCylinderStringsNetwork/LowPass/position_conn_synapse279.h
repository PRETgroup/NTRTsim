#ifndef POSITION_CONN_SYNAPSE279_H_
#define POSITION_CONN_SYNAPSE279_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse279 States
enum PositionConnSynapse279States {
    POSITION_CONN_SYNAPSE279_L,
};

// position_conn_synapse279 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse279States state;
} PositionConnSynapse279;

// position_conn_synapse279 Initialisation function
void PositionConnSynapse279Init(PositionConnSynapse279* me);

// position_conn_synapse279 Execution function
void PositionConnSynapse279Run(PositionConnSynapse279* me);

#endif // POSITION_CONN_SYNAPSE279_H_