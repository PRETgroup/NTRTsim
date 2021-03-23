#ifndef POSITION_CONN_SYNAPSE318_H_
#define POSITION_CONN_SYNAPSE318_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse318 States
enum PositionConnSynapse318States {
    POSITION_CONN_SYNAPSE318_L,
};

// position_conn_synapse318 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse318States state;
} PositionConnSynapse318;

// position_conn_synapse318 Initialisation function
void PositionConnSynapse318Init(PositionConnSynapse318* me);

// position_conn_synapse318 Execution function
void PositionConnSynapse318Run(PositionConnSynapse318* me);

#endif // POSITION_CONN_SYNAPSE318_H_