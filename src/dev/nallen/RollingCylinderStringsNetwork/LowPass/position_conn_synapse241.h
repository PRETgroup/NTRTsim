#ifndef POSITION_CONN_SYNAPSE241_H_
#define POSITION_CONN_SYNAPSE241_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse241 States
enum PositionConnSynapse241States {
    POSITION_CONN_SYNAPSE241_L,
};

// position_conn_synapse241 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse241States state;
} PositionConnSynapse241;

// position_conn_synapse241 Initialisation function
void PositionConnSynapse241Init(PositionConnSynapse241* me);

// position_conn_synapse241 Execution function
void PositionConnSynapse241Run(PositionConnSynapse241* me);

#endif // POSITION_CONN_SYNAPSE241_H_