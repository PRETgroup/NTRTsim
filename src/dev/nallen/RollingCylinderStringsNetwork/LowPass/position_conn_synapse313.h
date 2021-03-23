#ifndef POSITION_CONN_SYNAPSE313_H_
#define POSITION_CONN_SYNAPSE313_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse313 States
enum PositionConnSynapse313States {
    POSITION_CONN_SYNAPSE313_L,
};

// position_conn_synapse313 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse313States state;
} PositionConnSynapse313;

// position_conn_synapse313 Initialisation function
void PositionConnSynapse313Init(PositionConnSynapse313* me);

// position_conn_synapse313 Execution function
void PositionConnSynapse313Run(PositionConnSynapse313* me);

#endif // POSITION_CONN_SYNAPSE313_H_