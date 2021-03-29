#ifndef POSITION_CONN_SYNAPSE101_H_
#define POSITION_CONN_SYNAPSE101_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse101 States
enum PositionConnSynapse101States {
    POSITION_CONN_SYNAPSE101_L,
};

// position_conn_synapse101 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse101States state;
} PositionConnSynapse101;

// position_conn_synapse101 Initialisation function
void PositionConnSynapse101Init(PositionConnSynapse101* me);

// position_conn_synapse101 Execution function
void PositionConnSynapse101Run(PositionConnSynapse101* me);

#endif // POSITION_CONN_SYNAPSE101_H_