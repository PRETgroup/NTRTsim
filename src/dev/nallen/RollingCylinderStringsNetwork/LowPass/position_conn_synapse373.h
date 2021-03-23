#ifndef POSITION_CONN_SYNAPSE373_H_
#define POSITION_CONN_SYNAPSE373_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse373 States
enum PositionConnSynapse373States {
    POSITION_CONN_SYNAPSE373_L,
};

// position_conn_synapse373 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse373States state;
} PositionConnSynapse373;

// position_conn_synapse373 Initialisation function
void PositionConnSynapse373Init(PositionConnSynapse373* me);

// position_conn_synapse373 Execution function
void PositionConnSynapse373Run(PositionConnSynapse373* me);

#endif // POSITION_CONN_SYNAPSE373_H_