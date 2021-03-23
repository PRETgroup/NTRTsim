#ifndef POSITION_CONN_SYNAPSE56_H_
#define POSITION_CONN_SYNAPSE56_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse56 States
enum PositionConnSynapse56States {
    POSITION_CONN_SYNAPSE56_L,
};

// position_conn_synapse56 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse56States state;
} PositionConnSynapse56;

// position_conn_synapse56 Initialisation function
void PositionConnSynapse56Init(PositionConnSynapse56* me);

// position_conn_synapse56 Execution function
void PositionConnSynapse56Run(PositionConnSynapse56* me);

#endif // POSITION_CONN_SYNAPSE56_H_