#ifndef POSITION_CONN_SYNAPSE219_H_
#define POSITION_CONN_SYNAPSE219_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse219 States
enum PositionConnSynapse219States {
    POSITION_CONN_SYNAPSE219_L,
};

// position_conn_synapse219 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse219States state;
} PositionConnSynapse219;

// position_conn_synapse219 Initialisation function
void PositionConnSynapse219Init(PositionConnSynapse219* me);

// position_conn_synapse219 Execution function
void PositionConnSynapse219Run(PositionConnSynapse219* me);

#endif // POSITION_CONN_SYNAPSE219_H_