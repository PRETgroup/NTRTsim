#ifndef POSITION_CONN_SYNAPSE327_H_
#define POSITION_CONN_SYNAPSE327_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse327 States
enum PositionConnSynapse327States {
    POSITION_CONN_SYNAPSE327_L,
};

// position_conn_synapse327 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse327States state;
} PositionConnSynapse327;

// position_conn_synapse327 Initialisation function
void PositionConnSynapse327Init(PositionConnSynapse327* me);

// position_conn_synapse327 Execution function
void PositionConnSynapse327Run(PositionConnSynapse327* me);

#endif // POSITION_CONN_SYNAPSE327_H_