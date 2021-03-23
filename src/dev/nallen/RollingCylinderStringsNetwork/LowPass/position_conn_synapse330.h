#ifndef POSITION_CONN_SYNAPSE330_H_
#define POSITION_CONN_SYNAPSE330_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse330 States
enum PositionConnSynapse330States {
    POSITION_CONN_SYNAPSE330_L,
};

// position_conn_synapse330 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse330States state;
} PositionConnSynapse330;

// position_conn_synapse330 Initialisation function
void PositionConnSynapse330Init(PositionConnSynapse330* me);

// position_conn_synapse330 Execution function
void PositionConnSynapse330Run(PositionConnSynapse330* me);

#endif // POSITION_CONN_SYNAPSE330_H_