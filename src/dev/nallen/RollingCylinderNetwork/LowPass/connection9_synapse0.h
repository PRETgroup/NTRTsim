#ifndef CONNECTION9_SYNAPSE0_H_
#define CONNECTION9_SYNAPSE0_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection9_synapse0 States
enum Connection9Synapse0States {
    CONNECTION9_SYNAPSE0_L,
};

// connection9_synapse0 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection9Synapse0States state;
} Connection9Synapse0;

// connection9_synapse0 Initialisation function
void Connection9Synapse0Init(Connection9Synapse0* me);

// connection9_synapse0 Execution function
void Connection9Synapse0Run(Connection9Synapse0* me);

#endif // CONNECTION9_SYNAPSE0_H_