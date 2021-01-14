#ifndef CONNECTION12_SYNAPSE33_H_
#define CONNECTION12_SYNAPSE33_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse33 States
enum Connection12Synapse33States {
    CONNECTION12_SYNAPSE33_L,
};

// connection12_synapse33 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse33States state;
} Connection12Synapse33;

// connection12_synapse33 Initialisation function
void Connection12Synapse33Init(Connection12Synapse33* me);

// connection12_synapse33 Execution function
void Connection12Synapse33Run(Connection12Synapse33* me);

#endif // CONNECTION12_SYNAPSE33_H_