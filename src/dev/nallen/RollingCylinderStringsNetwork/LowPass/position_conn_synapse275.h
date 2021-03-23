#ifndef POSITION_CONN_SYNAPSE275_H_
#define POSITION_CONN_SYNAPSE275_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse275 States
enum PositionConnSynapse275States {
    POSITION_CONN_SYNAPSE275_L,
};

// position_conn_synapse275 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse275States state;
} PositionConnSynapse275;

// position_conn_synapse275 Initialisation function
void PositionConnSynapse275Init(PositionConnSynapse275* me);

// position_conn_synapse275 Execution function
void PositionConnSynapse275Run(PositionConnSynapse275* me);

#endif // POSITION_CONN_SYNAPSE275_H_