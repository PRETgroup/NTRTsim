#ifndef POSITION_CONN_SYNAPSE82_H_
#define POSITION_CONN_SYNAPSE82_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse82 States
enum PositionConnSynapse82States {
    POSITION_CONN_SYNAPSE82_L,
};

// position_conn_synapse82 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse82States state;
} PositionConnSynapse82;

// position_conn_synapse82 Initialisation function
void PositionConnSynapse82Init(PositionConnSynapse82* me);

// position_conn_synapse82 Execution function
void PositionConnSynapse82Run(PositionConnSynapse82* me);

#endif // POSITION_CONN_SYNAPSE82_H_