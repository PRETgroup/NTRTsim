#ifndef CONNECTION12_SYNAPSE69_H_
#define CONNECTION12_SYNAPSE69_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse69 States
enum Connection12Synapse69States {
    CONNECTION12_SYNAPSE69_L,
};

// connection12_synapse69 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse69States state;
} Connection12Synapse69;

// connection12_synapse69 Initialisation function
void Connection12Synapse69Init(Connection12Synapse69* me);

// connection12_synapse69 Execution function
void Connection12Synapse69Run(Connection12Synapse69* me);

#endif // CONNECTION12_SYNAPSE69_H_