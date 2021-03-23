#ifndef POSITION_CONN_SYNAPSE370_H_
#define POSITION_CONN_SYNAPSE370_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse370 States
enum PositionConnSynapse370States {
    POSITION_CONN_SYNAPSE370_L,
};

// position_conn_synapse370 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse370States state;
} PositionConnSynapse370;

// position_conn_synapse370 Initialisation function
void PositionConnSynapse370Init(PositionConnSynapse370* me);

// position_conn_synapse370 Execution function
void PositionConnSynapse370Run(PositionConnSynapse370* me);

#endif // POSITION_CONN_SYNAPSE370_H_