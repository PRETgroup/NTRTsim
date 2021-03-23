#ifndef POSITION_CONN_SYNAPSE232_H_
#define POSITION_CONN_SYNAPSE232_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse232 States
enum PositionConnSynapse232States {
    POSITION_CONN_SYNAPSE232_L,
};

// position_conn_synapse232 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse232States state;
} PositionConnSynapse232;

// position_conn_synapse232 Initialisation function
void PositionConnSynapse232Init(PositionConnSynapse232* me);

// position_conn_synapse232 Execution function
void PositionConnSynapse232Run(PositionConnSynapse232* me);

#endif // POSITION_CONN_SYNAPSE232_H_