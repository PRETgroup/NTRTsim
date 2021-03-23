#ifndef POSITION_CONN_SYNAPSE345_H_
#define POSITION_CONN_SYNAPSE345_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse345 States
enum PositionConnSynapse345States {
    POSITION_CONN_SYNAPSE345_L,
};

// position_conn_synapse345 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse345States state;
} PositionConnSynapse345;

// position_conn_synapse345 Initialisation function
void PositionConnSynapse345Init(PositionConnSynapse345* me);

// position_conn_synapse345 Execution function
void PositionConnSynapse345Run(PositionConnSynapse345* me);

#endif // POSITION_CONN_SYNAPSE345_H_