#ifndef POSITION_CONN_SYNAPSE191_H_
#define POSITION_CONN_SYNAPSE191_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse191 States
enum PositionConnSynapse191States {
    POSITION_CONN_SYNAPSE191_L,
};

// position_conn_synapse191 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse191States state;
} PositionConnSynapse191;

// position_conn_synapse191 Initialisation function
void PositionConnSynapse191Init(PositionConnSynapse191* me);

// position_conn_synapse191 Execution function
void PositionConnSynapse191Run(PositionConnSynapse191* me);

#endif // POSITION_CONN_SYNAPSE191_H_