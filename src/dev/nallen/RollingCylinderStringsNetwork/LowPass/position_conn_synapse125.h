#ifndef POSITION_CONN_SYNAPSE125_H_
#define POSITION_CONN_SYNAPSE125_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse125 States
enum PositionConnSynapse125States {
    POSITION_CONN_SYNAPSE125_L,
};

// position_conn_synapse125 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse125States state;
} PositionConnSynapse125;

// position_conn_synapse125 Initialisation function
void PositionConnSynapse125Init(PositionConnSynapse125* me);

// position_conn_synapse125 Execution function
void PositionConnSynapse125Run(PositionConnSynapse125* me);

#endif // POSITION_CONN_SYNAPSE125_H_