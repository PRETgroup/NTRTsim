#ifndef CONNECTION7_SYNAPSE0_H_
#define CONNECTION7_SYNAPSE0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection7_synapse0 States
enum Connection7Synapse0States {
    CONNECTION7_SYNAPSE0_L,
};

// connection7_synapse0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection7Synapse0States state;
} Connection7Synapse0;

// connection7_synapse0 Initialisation function
void Connection7Synapse0Init(Connection7Synapse0* me);

// connection7_synapse0 Execution function
void Connection7Synapse0Run(Connection7Synapse0* me);

#endif // CONNECTION7_SYNAPSE0_H_