#ifndef CONNECTION11_SYNAPSE42_H_
#define CONNECTION11_SYNAPSE42_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse42 States
enum Connection11Synapse42States {
    CONNECTION11_SYNAPSE42_L,
};

// connection11_synapse42 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse42States state;
} Connection11Synapse42;

// connection11_synapse42 Initialisation function
void Connection11Synapse42Init(Connection11Synapse42* me);

// connection11_synapse42 Execution function
void Connection11Synapse42Run(Connection11Synapse42* me);

#endif // CONNECTION11_SYNAPSE42_H_