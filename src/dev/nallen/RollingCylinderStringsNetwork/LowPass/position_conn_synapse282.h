#ifndef POSITION_CONN_SYNAPSE282_H_
#define POSITION_CONN_SYNAPSE282_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse282 States
enum PositionConnSynapse282States {
    POSITION_CONN_SYNAPSE282_L,
};

// position_conn_synapse282 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse282States state;
} PositionConnSynapse282;

// position_conn_synapse282 Initialisation function
void PositionConnSynapse282Init(PositionConnSynapse282* me);

// position_conn_synapse282 Execution function
void PositionConnSynapse282Run(PositionConnSynapse282* me);

#endif // POSITION_CONN_SYNAPSE282_H_