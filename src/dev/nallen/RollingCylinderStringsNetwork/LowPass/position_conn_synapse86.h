#ifndef POSITION_CONN_SYNAPSE86_H_
#define POSITION_CONN_SYNAPSE86_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse86 States
enum PositionConnSynapse86States {
    POSITION_CONN_SYNAPSE86_L,
};

// position_conn_synapse86 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse86States state;
} PositionConnSynapse86;

// position_conn_synapse86 Initialisation function
void PositionConnSynapse86Init(PositionConnSynapse86* me);

// position_conn_synapse86 Execution function
void PositionConnSynapse86Run(PositionConnSynapse86* me);

#endif // POSITION_CONN_SYNAPSE86_H_