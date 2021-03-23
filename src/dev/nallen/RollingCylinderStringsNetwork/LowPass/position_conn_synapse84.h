#ifndef POSITION_CONN_SYNAPSE84_H_
#define POSITION_CONN_SYNAPSE84_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse84 States
enum PositionConnSynapse84States {
    POSITION_CONN_SYNAPSE84_L,
};

// position_conn_synapse84 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse84States state;
} PositionConnSynapse84;

// position_conn_synapse84 Initialisation function
void PositionConnSynapse84Init(PositionConnSynapse84* me);

// position_conn_synapse84 Execution function
void PositionConnSynapse84Run(PositionConnSynapse84* me);

#endif // POSITION_CONN_SYNAPSE84_H_