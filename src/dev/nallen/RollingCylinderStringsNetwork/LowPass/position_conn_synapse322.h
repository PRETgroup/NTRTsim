#ifndef POSITION_CONN_SYNAPSE322_H_
#define POSITION_CONN_SYNAPSE322_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse322 States
enum PositionConnSynapse322States {
    POSITION_CONN_SYNAPSE322_L,
};

// position_conn_synapse322 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse322States state;
} PositionConnSynapse322;

// position_conn_synapse322 Initialisation function
void PositionConnSynapse322Init(PositionConnSynapse322* me);

// position_conn_synapse322 Execution function
void PositionConnSynapse322Run(PositionConnSynapse322* me);

#endif // POSITION_CONN_SYNAPSE322_H_