#ifndef POSITION_CONN_SYNAPSE160_H_
#define POSITION_CONN_SYNAPSE160_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse160 States
enum PositionConnSynapse160States {
    POSITION_CONN_SYNAPSE160_L,
};

// position_conn_synapse160 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse160States state;
} PositionConnSynapse160;

// position_conn_synapse160 Initialisation function
void PositionConnSynapse160Init(PositionConnSynapse160* me);

// position_conn_synapse160 Execution function
void PositionConnSynapse160Run(PositionConnSynapse160* me);

#endif // POSITION_CONN_SYNAPSE160_H_