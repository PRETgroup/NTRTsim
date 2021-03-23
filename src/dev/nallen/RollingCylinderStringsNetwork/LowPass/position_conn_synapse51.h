#ifndef POSITION_CONN_SYNAPSE51_H_
#define POSITION_CONN_SYNAPSE51_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse51 States
enum PositionConnSynapse51States {
    POSITION_CONN_SYNAPSE51_L,
};

// position_conn_synapse51 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse51States state;
} PositionConnSynapse51;

// position_conn_synapse51 Initialisation function
void PositionConnSynapse51Init(PositionConnSynapse51* me);

// position_conn_synapse51 Execution function
void PositionConnSynapse51Run(PositionConnSynapse51* me);

#endif // POSITION_CONN_SYNAPSE51_H_