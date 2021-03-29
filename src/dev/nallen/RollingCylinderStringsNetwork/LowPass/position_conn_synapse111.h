#ifndef POSITION_CONN_SYNAPSE111_H_
#define POSITION_CONN_SYNAPSE111_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse111 States
enum PositionConnSynapse111States {
    POSITION_CONN_SYNAPSE111_L,
};

// position_conn_synapse111 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse111States state;
} PositionConnSynapse111;

// position_conn_synapse111 Initialisation function
void PositionConnSynapse111Init(PositionConnSynapse111* me);

// position_conn_synapse111 Execution function
void PositionConnSynapse111Run(PositionConnSynapse111* me);

#endif // POSITION_CONN_SYNAPSE111_H_