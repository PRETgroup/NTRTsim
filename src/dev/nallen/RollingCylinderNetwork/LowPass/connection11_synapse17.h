#ifndef CONNECTION11_SYNAPSE17_H_
#define CONNECTION11_SYNAPSE17_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse17 States
enum Connection11Synapse17States {
    CONNECTION11_SYNAPSE17_L,
};

// connection11_synapse17 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse17States state;
} Connection11Synapse17;

// connection11_synapse17 Initialisation function
void Connection11Synapse17Init(Connection11Synapse17* me);

// connection11_synapse17 Execution function
void Connection11Synapse17Run(Connection11Synapse17* me);

#endif // CONNECTION11_SYNAPSE17_H_