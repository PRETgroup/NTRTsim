#ifndef CONNECTION12_SYNAPSE20_H_
#define CONNECTION12_SYNAPSE20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse20 States
enum Connection12Synapse20States {
    CONNECTION12_SYNAPSE20_L,
};

// connection12_synapse20 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse20States state;
} Connection12Synapse20;

// connection12_synapse20 Initialisation function
void Connection12Synapse20Init(Connection12Synapse20* me);

// connection12_synapse20 Execution function
void Connection12Synapse20Run(Connection12Synapse20* me);

#endif // CONNECTION12_SYNAPSE20_H_