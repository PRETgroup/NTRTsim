#ifndef POSITION_CONN_SYNAPSE116_H_
#define POSITION_CONN_SYNAPSE116_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse116 States
enum PositionConnSynapse116States {
    POSITION_CONN_SYNAPSE116_L,
};

// position_conn_synapse116 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse116States state;
} PositionConnSynapse116;

// position_conn_synapse116 Initialisation function
void PositionConnSynapse116Init(PositionConnSynapse116* me);

// position_conn_synapse116 Execution function
void PositionConnSynapse116Run(PositionConnSynapse116* me);

#endif // POSITION_CONN_SYNAPSE116_H_