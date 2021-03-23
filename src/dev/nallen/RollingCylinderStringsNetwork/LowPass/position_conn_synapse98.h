#ifndef POSITION_CONN_SYNAPSE98_H_
#define POSITION_CONN_SYNAPSE98_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse98 States
enum PositionConnSynapse98States {
    POSITION_CONN_SYNAPSE98_L,
};

// position_conn_synapse98 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse98States state;
} PositionConnSynapse98;

// position_conn_synapse98 Initialisation function
void PositionConnSynapse98Init(PositionConnSynapse98* me);

// position_conn_synapse98 Execution function
void PositionConnSynapse98Run(PositionConnSynapse98* me);

#endif // POSITION_CONN_SYNAPSE98_H_