#ifndef POSITION_CONN_SYNAPSE280_H_
#define POSITION_CONN_SYNAPSE280_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse280 States
enum PositionConnSynapse280States {
    POSITION_CONN_SYNAPSE280_L,
};

// position_conn_synapse280 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse280States state;
} PositionConnSynapse280;

// position_conn_synapse280 Initialisation function
void PositionConnSynapse280Init(PositionConnSynapse280* me);

// position_conn_synapse280 Execution function
void PositionConnSynapse280Run(PositionConnSynapse280* me);

#endif // POSITION_CONN_SYNAPSE280_H_