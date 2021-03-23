#ifndef POSITION_CONN_SYNAPSE134_H_
#define POSITION_CONN_SYNAPSE134_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse134 States
enum PositionConnSynapse134States {
    POSITION_CONN_SYNAPSE134_L,
};

// position_conn_synapse134 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse134States state;
} PositionConnSynapse134;

// position_conn_synapse134 Initialisation function
void PositionConnSynapse134Init(PositionConnSynapse134* me);

// position_conn_synapse134 Execution function
void PositionConnSynapse134Run(PositionConnSynapse134* me);

#endif // POSITION_CONN_SYNAPSE134_H_