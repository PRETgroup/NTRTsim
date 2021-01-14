#ifndef CONNECTION10_SYNAPSE0_H_
#define CONNECTION10_SYNAPSE0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection10_synapse0 States
enum Connection10Synapse0States {
    CONNECTION10_SYNAPSE0_L,
};

// connection10_synapse0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection10Synapse0States state;
} Connection10Synapse0;

// connection10_synapse0 Initialisation function
void Connection10Synapse0Init(Connection10Synapse0* me);

// connection10_synapse0 Execution function
void Connection10Synapse0Run(Connection10Synapse0* me);

#endif // CONNECTION10_SYNAPSE0_H_