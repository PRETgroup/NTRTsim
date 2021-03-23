#ifndef POSITION_CONN_SYNAPSE227_H_
#define POSITION_CONN_SYNAPSE227_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// position_conn_synapse227 States
enum PositionConnSynapse227States {
    POSITION_CONN_SYNAPSE227_L,
};

// position_conn_synapse227 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum PositionConnSynapse227States state;
} PositionConnSynapse227;

// position_conn_synapse227 Initialisation function
void PositionConnSynapse227Init(PositionConnSynapse227* me);

// position_conn_synapse227 Execution function
void PositionConnSynapse227Run(PositionConnSynapse227* me);

#endif // POSITION_CONN_SYNAPSE227_H_