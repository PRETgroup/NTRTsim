#ifndef POSITION_CONN_SYNAPSE175_H_
#define POSITION_CONN_SYNAPSE175_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse175 States
enum PositionConnSynapse175States {
    POSITION_CONN_SYNAPSE175_L,
};

// position_conn_synapse175 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse175States state;
} PositionConnSynapse175;

// position_conn_synapse175 Initialisation function
void PositionConnSynapse175Init(PositionConnSynapse175* me);

// position_conn_synapse175 Execution function
void PositionConnSynapse175Run(PositionConnSynapse175* me);

#endif // POSITION_CONN_SYNAPSE175_H_