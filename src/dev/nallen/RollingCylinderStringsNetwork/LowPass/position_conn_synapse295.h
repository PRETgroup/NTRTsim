#ifndef POSITION_CONN_SYNAPSE295_H_
#define POSITION_CONN_SYNAPSE295_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse295 States
enum PositionConnSynapse295States {
    POSITION_CONN_SYNAPSE295_L,
};

// position_conn_synapse295 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse295States state;
} PositionConnSynapse295;

// position_conn_synapse295 Initialisation function
void PositionConnSynapse295Init(PositionConnSynapse295* me);

// position_conn_synapse295 Execution function
void PositionConnSynapse295Run(PositionConnSynapse295* me);

#endif // POSITION_CONN_SYNAPSE295_H_