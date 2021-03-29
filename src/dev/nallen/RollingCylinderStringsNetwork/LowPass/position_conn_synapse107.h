#ifndef POSITION_CONN_SYNAPSE107_H_
#define POSITION_CONN_SYNAPSE107_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse107 States
enum PositionConnSynapse107States {
    POSITION_CONN_SYNAPSE107_L,
};

// position_conn_synapse107 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse107States state;
} PositionConnSynapse107;

// position_conn_synapse107 Initialisation function
void PositionConnSynapse107Init(PositionConnSynapse107* me);

// position_conn_synapse107 Execution function
void PositionConnSynapse107Run(PositionConnSynapse107* me);

#endif // POSITION_CONN_SYNAPSE107_H_