#ifndef POSITION_CONN_SYNAPSE371_H_
#define POSITION_CONN_SYNAPSE371_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse371 States
enum PositionConnSynapse371States {
    POSITION_CONN_SYNAPSE371_L,
};

// position_conn_synapse371 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse371States state;
} PositionConnSynapse371;

// position_conn_synapse371 Initialisation function
void PositionConnSynapse371Init(PositionConnSynapse371* me);

// position_conn_synapse371 Execution function
void PositionConnSynapse371Run(PositionConnSynapse371* me);

#endif // POSITION_CONN_SYNAPSE371_H_