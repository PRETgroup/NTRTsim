#ifndef POSITION_CONN_SYNAPSE44_H_
#define POSITION_CONN_SYNAPSE44_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse44 States
enum PositionConnSynapse44States {
    POSITION_CONN_SYNAPSE44_L,
};

// position_conn_synapse44 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse44States state;
} PositionConnSynapse44;

// position_conn_synapse44 Initialisation function
void PositionConnSynapse44Init(PositionConnSynapse44* me);

// position_conn_synapse44 Execution function
void PositionConnSynapse44Run(PositionConnSynapse44* me);

#endif // POSITION_CONN_SYNAPSE44_H_