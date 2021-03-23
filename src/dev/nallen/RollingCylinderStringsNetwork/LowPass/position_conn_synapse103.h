#ifndef POSITION_CONN_SYNAPSE103_H_
#define POSITION_CONN_SYNAPSE103_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse103 States
enum PositionConnSynapse103States {
    POSITION_CONN_SYNAPSE103_L,
};

// position_conn_synapse103 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse103States state;
} PositionConnSynapse103;

// position_conn_synapse103 Initialisation function
void PositionConnSynapse103Init(PositionConnSynapse103* me);

// position_conn_synapse103 Execution function
void PositionConnSynapse103Run(PositionConnSynapse103* me);

#endif // POSITION_CONN_SYNAPSE103_H_