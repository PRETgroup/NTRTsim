#ifndef POSITION_CONN_SYNAPSE366_H_
#define POSITION_CONN_SYNAPSE366_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse366 States
enum PositionConnSynapse366States {
    POSITION_CONN_SYNAPSE366_L,
};

// position_conn_synapse366 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse366States state;
} PositionConnSynapse366;

// position_conn_synapse366 Initialisation function
void PositionConnSynapse366Init(PositionConnSynapse366* me);

// position_conn_synapse366 Execution function
void PositionConnSynapse366Run(PositionConnSynapse366* me);

#endif // POSITION_CONN_SYNAPSE366_H_