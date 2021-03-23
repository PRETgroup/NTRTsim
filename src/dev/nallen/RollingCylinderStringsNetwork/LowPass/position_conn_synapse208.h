#ifndef POSITION_CONN_SYNAPSE208_H_
#define POSITION_CONN_SYNAPSE208_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse208 States
enum PositionConnSynapse208States {
    POSITION_CONN_SYNAPSE208_L,
};

// position_conn_synapse208 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse208States state;
} PositionConnSynapse208;

// position_conn_synapse208 Initialisation function
void PositionConnSynapse208Init(PositionConnSynapse208* me);

// position_conn_synapse208 Execution function
void PositionConnSynapse208Run(PositionConnSynapse208* me);

#endif // POSITION_CONN_SYNAPSE208_H_