#ifndef POSITION_CONN_SYNAPSE139_H_
#define POSITION_CONN_SYNAPSE139_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse139 States
enum PositionConnSynapse139States {
    POSITION_CONN_SYNAPSE139_L,
};

// position_conn_synapse139 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse139States state;
} PositionConnSynapse139;

// position_conn_synapse139 Initialisation function
void PositionConnSynapse139Init(PositionConnSynapse139* me);

// position_conn_synapse139 Execution function
void PositionConnSynapse139Run(PositionConnSynapse139* me);

#endif // POSITION_CONN_SYNAPSE139_H_