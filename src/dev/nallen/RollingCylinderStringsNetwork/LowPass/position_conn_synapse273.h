#ifndef POSITION_CONN_SYNAPSE273_H_
#define POSITION_CONN_SYNAPSE273_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse273 States
enum PositionConnSynapse273States {
    POSITION_CONN_SYNAPSE273_L,
};

// position_conn_synapse273 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse273States state;
} PositionConnSynapse273;

// position_conn_synapse273 Initialisation function
void PositionConnSynapse273Init(PositionConnSynapse273* me);

// position_conn_synapse273 Execution function
void PositionConnSynapse273Run(PositionConnSynapse273* me);

#endif // POSITION_CONN_SYNAPSE273_H_