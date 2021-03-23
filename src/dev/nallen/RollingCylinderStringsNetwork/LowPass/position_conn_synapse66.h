#ifndef POSITION_CONN_SYNAPSE66_H_
#define POSITION_CONN_SYNAPSE66_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse66 States
enum PositionConnSynapse66States {
    POSITION_CONN_SYNAPSE66_L,
};

// position_conn_synapse66 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse66States state;
} PositionConnSynapse66;

// position_conn_synapse66 Initialisation function
void PositionConnSynapse66Init(PositionConnSynapse66* me);

// position_conn_synapse66 Execution function
void PositionConnSynapse66Run(PositionConnSynapse66* me);

#endif // POSITION_CONN_SYNAPSE66_H_