#ifndef POSITION_CONN_SYNAPSE331_H_
#define POSITION_CONN_SYNAPSE331_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse331 States
enum PositionConnSynapse331States {
    POSITION_CONN_SYNAPSE331_L,
};

// position_conn_synapse331 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse331States state;
} PositionConnSynapse331;

// position_conn_synapse331 Initialisation function
void PositionConnSynapse331Init(PositionConnSynapse331* me);

// position_conn_synapse331 Execution function
void PositionConnSynapse331Run(PositionConnSynapse331* me);

#endif // POSITION_CONN_SYNAPSE331_H_