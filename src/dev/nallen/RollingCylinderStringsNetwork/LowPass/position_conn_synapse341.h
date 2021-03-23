#ifndef POSITION_CONN_SYNAPSE341_H_
#define POSITION_CONN_SYNAPSE341_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse341 States
enum PositionConnSynapse341States {
    POSITION_CONN_SYNAPSE341_L,
};

// position_conn_synapse341 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse341States state;
} PositionConnSynapse341;

// position_conn_synapse341 Initialisation function
void PositionConnSynapse341Init(PositionConnSynapse341* me);

// position_conn_synapse341 Execution function
void PositionConnSynapse341Run(PositionConnSynapse341* me);

#endif // POSITION_CONN_SYNAPSE341_H_