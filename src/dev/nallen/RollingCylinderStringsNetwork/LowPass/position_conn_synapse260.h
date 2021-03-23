#ifndef POSITION_CONN_SYNAPSE260_H_
#define POSITION_CONN_SYNAPSE260_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse260 States
enum PositionConnSynapse260States {
    POSITION_CONN_SYNAPSE260_L,
};

// position_conn_synapse260 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse260States state;
} PositionConnSynapse260;

// position_conn_synapse260 Initialisation function
void PositionConnSynapse260Init(PositionConnSynapse260* me);

// position_conn_synapse260 Execution function
void PositionConnSynapse260Run(PositionConnSynapse260* me);

#endif // POSITION_CONN_SYNAPSE260_H_