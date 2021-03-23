#ifndef POSITION_CONN_SYNAPSE294_H_
#define POSITION_CONN_SYNAPSE294_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse294 States
enum PositionConnSynapse294States {
    POSITION_CONN_SYNAPSE294_L,
};

// position_conn_synapse294 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse294States state;
} PositionConnSynapse294;

// position_conn_synapse294 Initialisation function
void PositionConnSynapse294Init(PositionConnSynapse294* me);

// position_conn_synapse294 Execution function
void PositionConnSynapse294Run(PositionConnSynapse294* me);

#endif // POSITION_CONN_SYNAPSE294_H_