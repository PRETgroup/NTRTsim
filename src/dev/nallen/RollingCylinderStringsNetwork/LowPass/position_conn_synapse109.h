#ifndef POSITION_CONN_SYNAPSE109_H_
#define POSITION_CONN_SYNAPSE109_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse109 States
enum PositionConnSynapse109States {
    POSITION_CONN_SYNAPSE109_L,
};

// position_conn_synapse109 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse109States state;
} PositionConnSynapse109;

// position_conn_synapse109 Initialisation function
void PositionConnSynapse109Init(PositionConnSynapse109* me);

// position_conn_synapse109 Execution function
void PositionConnSynapse109Run(PositionConnSynapse109* me);

#endif // POSITION_CONN_SYNAPSE109_H_