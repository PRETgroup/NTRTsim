#ifndef POSITION_CONN_SYNAPSE238_H_
#define POSITION_CONN_SYNAPSE238_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse238 States
enum PositionConnSynapse238States {
    POSITION_CONN_SYNAPSE238_L,
};

// position_conn_synapse238 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse238States state;
} PositionConnSynapse238;

// position_conn_synapse238 Initialisation function
void PositionConnSynapse238Init(PositionConnSynapse238* me);

// position_conn_synapse238 Execution function
void PositionConnSynapse238Run(PositionConnSynapse238* me);

#endif // POSITION_CONN_SYNAPSE238_H_