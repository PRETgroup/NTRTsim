#ifndef POSITION_CONN_SYNAPSE352_H_
#define POSITION_CONN_SYNAPSE352_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse352 States
enum PositionConnSynapse352States {
    POSITION_CONN_SYNAPSE352_L,
};

// position_conn_synapse352 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse352States state;
} PositionConnSynapse352;

// position_conn_synapse352 Initialisation function
void PositionConnSynapse352Init(PositionConnSynapse352* me);

// position_conn_synapse352 Execution function
void PositionConnSynapse352Run(PositionConnSynapse352* me);

#endif // POSITION_CONN_SYNAPSE352_H_