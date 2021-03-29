#ifndef POSITION_CONN_SYNAPSE123_H_
#define POSITION_CONN_SYNAPSE123_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse123 States
enum PositionConnSynapse123States {
    POSITION_CONN_SYNAPSE123_L,
};

// position_conn_synapse123 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse123States state;
} PositionConnSynapse123;

// position_conn_synapse123 Initialisation function
void PositionConnSynapse123Init(PositionConnSynapse123* me);

// position_conn_synapse123 Execution function
void PositionConnSynapse123Run(PositionConnSynapse123* me);

#endif // POSITION_CONN_SYNAPSE123_H_