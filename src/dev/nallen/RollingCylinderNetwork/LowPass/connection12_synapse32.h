#ifndef CONNECTION12_SYNAPSE32_H_
#define CONNECTION12_SYNAPSE32_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse32 States
enum Connection12Synapse32States {
    CONNECTION12_SYNAPSE32_L,
};

// connection12_synapse32 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse32States state;
} Connection12Synapse32;

// connection12_synapse32 Initialisation function
void Connection12Synapse32Init(Connection12Synapse32* me);

// connection12_synapse32 Execution function
void Connection12Synapse32Run(Connection12Synapse32* me);

#endif // CONNECTION12_SYNAPSE32_H_