#ifndef POSITION_CONN_SYNAPSE78_H_
#define POSITION_CONN_SYNAPSE78_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse78 States
enum PositionConnSynapse78States {
    POSITION_CONN_SYNAPSE78_L,
};

// position_conn_synapse78 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse78States state;
} PositionConnSynapse78;

// position_conn_synapse78 Initialisation function
void PositionConnSynapse78Init(PositionConnSynapse78* me);

// position_conn_synapse78 Execution function
void PositionConnSynapse78Run(PositionConnSynapse78* me);

#endif // POSITION_CONN_SYNAPSE78_H_