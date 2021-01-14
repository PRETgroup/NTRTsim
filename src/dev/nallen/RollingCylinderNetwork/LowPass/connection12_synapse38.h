#ifndef CONNECTION12_SYNAPSE38_H_
#define CONNECTION12_SYNAPSE38_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse38 States
enum Connection12Synapse38States {
    CONNECTION12_SYNAPSE38_L,
};

// connection12_synapse38 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse38States state;
} Connection12Synapse38;

// connection12_synapse38 Initialisation function
void Connection12Synapse38Init(Connection12Synapse38* me);

// connection12_synapse38 Execution function
void Connection12Synapse38Run(Connection12Synapse38* me);

#endif // CONNECTION12_SYNAPSE38_H_