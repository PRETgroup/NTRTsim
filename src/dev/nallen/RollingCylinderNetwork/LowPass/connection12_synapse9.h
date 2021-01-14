#ifndef CONNECTION12_SYNAPSE9_H_
#define CONNECTION12_SYNAPSE9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse9 States
enum Connection12Synapse9States {
    CONNECTION12_SYNAPSE9_L,
};

// connection12_synapse9 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse9States state;
} Connection12Synapse9;

// connection12_synapse9 Initialisation function
void Connection12Synapse9Init(Connection12Synapse9* me);

// connection12_synapse9 Execution function
void Connection12Synapse9Run(Connection12Synapse9* me);

#endif // CONNECTION12_SYNAPSE9_H_