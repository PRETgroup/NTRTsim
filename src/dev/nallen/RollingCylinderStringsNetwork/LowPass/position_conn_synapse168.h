#ifndef POSITION_CONN_SYNAPSE168_H_
#define POSITION_CONN_SYNAPSE168_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse168 States
enum PositionConnSynapse168States {
    POSITION_CONN_SYNAPSE168_L,
};

// position_conn_synapse168 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse168States state;
} PositionConnSynapse168;

// position_conn_synapse168 Initialisation function
void PositionConnSynapse168Init(PositionConnSynapse168* me);

// position_conn_synapse168 Execution function
void PositionConnSynapse168Run(PositionConnSynapse168* me);

#endif // POSITION_CONN_SYNAPSE168_H_