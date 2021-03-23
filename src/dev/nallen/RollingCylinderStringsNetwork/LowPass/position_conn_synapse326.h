#ifndef POSITION_CONN_SYNAPSE326_H_
#define POSITION_CONN_SYNAPSE326_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse326 States
enum PositionConnSynapse326States {
    POSITION_CONN_SYNAPSE326_L,
};

// position_conn_synapse326 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse326States state;
} PositionConnSynapse326;

// position_conn_synapse326 Initialisation function
void PositionConnSynapse326Init(PositionConnSynapse326* me);

// position_conn_synapse326 Execution function
void PositionConnSynapse326Run(PositionConnSynapse326* me);

#endif // POSITION_CONN_SYNAPSE326_H_