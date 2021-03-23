#ifndef POSITION_CONN_SYNAPSE117_H_
#define POSITION_CONN_SYNAPSE117_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse117 States
enum PositionConnSynapse117States {
    POSITION_CONN_SYNAPSE117_L,
};

// position_conn_synapse117 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse117States state;
} PositionConnSynapse117;

// position_conn_synapse117 Initialisation function
void PositionConnSynapse117Init(PositionConnSynapse117* me);

// position_conn_synapse117 Execution function
void PositionConnSynapse117Run(PositionConnSynapse117* me);

#endif // POSITION_CONN_SYNAPSE117_H_