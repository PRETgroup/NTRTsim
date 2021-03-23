#ifndef POSITION_CONN_SYNAPSE394_H_
#define POSITION_CONN_SYNAPSE394_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse394 States
enum PositionConnSynapse394States {
    POSITION_CONN_SYNAPSE394_L,
};

// position_conn_synapse394 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse394States state;
} PositionConnSynapse394;

// position_conn_synapse394 Initialisation function
void PositionConnSynapse394Init(PositionConnSynapse394* me);

// position_conn_synapse394 Execution function
void PositionConnSynapse394Run(PositionConnSynapse394* me);

#endif // POSITION_CONN_SYNAPSE394_H_