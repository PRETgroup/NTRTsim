#ifndef POSITION_CONN_SYNAPSE261_H_
#define POSITION_CONN_SYNAPSE261_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse261 States
enum PositionConnSynapse261States {
    POSITION_CONN_SYNAPSE261_L,
};

// position_conn_synapse261 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse261States state;
} PositionConnSynapse261;

// position_conn_synapse261 Initialisation function
void PositionConnSynapse261Init(PositionConnSynapse261* me);

// position_conn_synapse261 Execution function
void PositionConnSynapse261Run(PositionConnSynapse261* me);

#endif // POSITION_CONN_SYNAPSE261_H_