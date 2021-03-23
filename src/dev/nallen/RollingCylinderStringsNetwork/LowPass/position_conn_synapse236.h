#ifndef POSITION_CONN_SYNAPSE236_H_
#define POSITION_CONN_SYNAPSE236_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse236 States
enum PositionConnSynapse236States {
    POSITION_CONN_SYNAPSE236_L,
};

// position_conn_synapse236 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse236States state;
} PositionConnSynapse236;

// position_conn_synapse236 Initialisation function
void PositionConnSynapse236Init(PositionConnSynapse236* me);

// position_conn_synapse236 Execution function
void PositionConnSynapse236Run(PositionConnSynapse236* me);

#endif // POSITION_CONN_SYNAPSE236_H_