#ifndef POSITION_CONN_SYNAPSE357_H_
#define POSITION_CONN_SYNAPSE357_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse357 States
enum PositionConnSynapse357States {
    POSITION_CONN_SYNAPSE357_L,
};

// position_conn_synapse357 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse357States state;
} PositionConnSynapse357;

// position_conn_synapse357 Initialisation function
void PositionConnSynapse357Init(PositionConnSynapse357* me);

// position_conn_synapse357 Execution function
void PositionConnSynapse357Run(PositionConnSynapse357* me);

#endif // POSITION_CONN_SYNAPSE357_H_