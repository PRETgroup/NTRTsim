#ifndef POSITION_CONN_SYNAPSE321_H_
#define POSITION_CONN_SYNAPSE321_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse321 States
enum PositionConnSynapse321States {
    POSITION_CONN_SYNAPSE321_L,
};

// position_conn_synapse321 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse321States state;
} PositionConnSynapse321;

// position_conn_synapse321 Initialisation function
void PositionConnSynapse321Init(PositionConnSynapse321* me);

// position_conn_synapse321 Execution function
void PositionConnSynapse321Run(PositionConnSynapse321* me);

#endif // POSITION_CONN_SYNAPSE321_H_