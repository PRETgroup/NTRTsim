#ifndef POSITION_CONN_SYNAPSE272_H_
#define POSITION_CONN_SYNAPSE272_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse272 States
enum PositionConnSynapse272States {
    POSITION_CONN_SYNAPSE272_L,
};

// position_conn_synapse272 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse272States state;
} PositionConnSynapse272;

// position_conn_synapse272 Initialisation function
void PositionConnSynapse272Init(PositionConnSynapse272* me);

// position_conn_synapse272 Execution function
void PositionConnSynapse272Run(PositionConnSynapse272* me);

#endif // POSITION_CONN_SYNAPSE272_H_