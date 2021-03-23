#ifndef POSITION_CONN_SYNAPSE21_H_
#define POSITION_CONN_SYNAPSE21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse21 States
enum PositionConnSynapse21States {
    POSITION_CONN_SYNAPSE21_L,
};

// position_conn_synapse21 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse21States state;
} PositionConnSynapse21;

// position_conn_synapse21 Initialisation function
void PositionConnSynapse21Init(PositionConnSynapse21* me);

// position_conn_synapse21 Execution function
void PositionConnSynapse21Run(PositionConnSynapse21* me);

#endif // POSITION_CONN_SYNAPSE21_H_