#ifndef POSITION_CONN_SYNAPSE214_H_
#define POSITION_CONN_SYNAPSE214_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse214 States
enum PositionConnSynapse214States {
    POSITION_CONN_SYNAPSE214_L,
};

// position_conn_synapse214 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse214States state;
} PositionConnSynapse214;

// position_conn_synapse214 Initialisation function
void PositionConnSynapse214Init(PositionConnSynapse214* me);

// position_conn_synapse214 Execution function
void PositionConnSynapse214Run(PositionConnSynapse214* me);

#endif // POSITION_CONN_SYNAPSE214_H_