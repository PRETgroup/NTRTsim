#ifndef POSITION_CONN_SYNAPSE25_H_
#define POSITION_CONN_SYNAPSE25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse25 States
enum PositionConnSynapse25States {
    POSITION_CONN_SYNAPSE25_L,
};

// position_conn_synapse25 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse25States state;
} PositionConnSynapse25;

// position_conn_synapse25 Initialisation function
void PositionConnSynapse25Init(PositionConnSynapse25* me);

// position_conn_synapse25 Execution function
void PositionConnSynapse25Run(PositionConnSynapse25* me);

#endif // POSITION_CONN_SYNAPSE25_H_