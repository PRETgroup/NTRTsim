#ifndef POSITION_CONN_SYNAPSE119_H_
#define POSITION_CONN_SYNAPSE119_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse119 States
enum PositionConnSynapse119States {
    POSITION_CONN_SYNAPSE119_L,
};

// position_conn_synapse119 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse119States state;
} PositionConnSynapse119;

// position_conn_synapse119 Initialisation function
void PositionConnSynapse119Init(PositionConnSynapse119* me);

// position_conn_synapse119 Execution function
void PositionConnSynapse119Run(PositionConnSynapse119* me);

#endif // POSITION_CONN_SYNAPSE119_H_