#ifndef POSITION_CONN_SYNAPSE307_H_
#define POSITION_CONN_SYNAPSE307_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse307 States
enum PositionConnSynapse307States {
    POSITION_CONN_SYNAPSE307_L,
};

// position_conn_synapse307 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse307States state;
} PositionConnSynapse307;

// position_conn_synapse307 Initialisation function
void PositionConnSynapse307Init(PositionConnSynapse307* me);

// position_conn_synapse307 Execution function
void PositionConnSynapse307Run(PositionConnSynapse307* me);

#endif // POSITION_CONN_SYNAPSE307_H_