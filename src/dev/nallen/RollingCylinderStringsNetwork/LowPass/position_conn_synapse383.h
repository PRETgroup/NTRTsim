#ifndef POSITION_CONN_SYNAPSE383_H_
#define POSITION_CONN_SYNAPSE383_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse383 States
enum PositionConnSynapse383States {
    POSITION_CONN_SYNAPSE383_L,
};

// position_conn_synapse383 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse383States state;
} PositionConnSynapse383;

// position_conn_synapse383 Initialisation function
void PositionConnSynapse383Init(PositionConnSynapse383* me);

// position_conn_synapse383 Execution function
void PositionConnSynapse383Run(PositionConnSynapse383* me);

#endif // POSITION_CONN_SYNAPSE383_H_