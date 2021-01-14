#ifndef CONNECTION12_SYNAPSE93_H_
#define CONNECTION12_SYNAPSE93_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse93 States
enum Connection12Synapse93States {
    CONNECTION12_SYNAPSE93_L,
};

// connection12_synapse93 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse93States state;
} Connection12Synapse93;

// connection12_synapse93 Initialisation function
void Connection12Synapse93Init(Connection12Synapse93* me);

// connection12_synapse93 Execution function
void Connection12Synapse93Run(Connection12Synapse93* me);

#endif // CONNECTION12_SYNAPSE93_H_