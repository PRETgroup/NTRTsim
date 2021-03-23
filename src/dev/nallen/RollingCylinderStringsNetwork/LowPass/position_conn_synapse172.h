#ifndef POSITION_CONN_SYNAPSE172_H_
#define POSITION_CONN_SYNAPSE172_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse172 States
enum PositionConnSynapse172States {
    POSITION_CONN_SYNAPSE172_L,
};

// position_conn_synapse172 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse172States state;
} PositionConnSynapse172;

// position_conn_synapse172 Initialisation function
void PositionConnSynapse172Init(PositionConnSynapse172* me);

// position_conn_synapse172 Execution function
void PositionConnSynapse172Run(PositionConnSynapse172* me);

#endif // POSITION_CONN_SYNAPSE172_H_