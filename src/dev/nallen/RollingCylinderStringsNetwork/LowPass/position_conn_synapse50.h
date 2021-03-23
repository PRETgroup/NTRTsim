#ifndef POSITION_CONN_SYNAPSE50_H_
#define POSITION_CONN_SYNAPSE50_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse50 States
enum PositionConnSynapse50States {
    POSITION_CONN_SYNAPSE50_L,
};

// position_conn_synapse50 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse50States state;
} PositionConnSynapse50;

// position_conn_synapse50 Initialisation function
void PositionConnSynapse50Init(PositionConnSynapse50* me);

// position_conn_synapse50 Execution function
void PositionConnSynapse50Run(PositionConnSynapse50* me);

#endif // POSITION_CONN_SYNAPSE50_H_