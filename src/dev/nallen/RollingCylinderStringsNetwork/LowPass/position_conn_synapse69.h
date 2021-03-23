#ifndef POSITION_CONN_SYNAPSE69_H_
#define POSITION_CONN_SYNAPSE69_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse69 States
enum PositionConnSynapse69States {
    POSITION_CONN_SYNAPSE69_L,
};

// position_conn_synapse69 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse69States state;
} PositionConnSynapse69;

// position_conn_synapse69 Initialisation function
void PositionConnSynapse69Init(PositionConnSynapse69* me);

// position_conn_synapse69 Execution function
void PositionConnSynapse69Run(PositionConnSynapse69* me);

#endif // POSITION_CONN_SYNAPSE69_H_