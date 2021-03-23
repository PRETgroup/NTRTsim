#ifndef POSITION_CONN_SYNAPSE224_H_
#define POSITION_CONN_SYNAPSE224_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse224 States
enum PositionConnSynapse224States {
    POSITION_CONN_SYNAPSE224_L,
};

// position_conn_synapse224 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse224States state;
} PositionConnSynapse224;

// position_conn_synapse224 Initialisation function
void PositionConnSynapse224Init(PositionConnSynapse224* me);

// position_conn_synapse224 Execution function
void PositionConnSynapse224Run(PositionConnSynapse224* me);

#endif // POSITION_CONN_SYNAPSE224_H_