#ifndef CONNECTION12_SYNAPSE49_H_
#define CONNECTION12_SYNAPSE49_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse49 States
enum Connection12Synapse49States {
    CONNECTION12_SYNAPSE49_L,
};

// connection12_synapse49 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse49States state;
} Connection12Synapse49;

// connection12_synapse49 Initialisation function
void Connection12Synapse49Init(Connection12Synapse49* me);

// connection12_synapse49 Execution function
void Connection12Synapse49Run(Connection12Synapse49* me);

#endif // CONNECTION12_SYNAPSE49_H_