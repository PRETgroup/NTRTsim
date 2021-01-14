#ifndef CONNECTION12_SYNAPSE86_H_
#define CONNECTION12_SYNAPSE86_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse86 States
enum Connection12Synapse86States {
    CONNECTION12_SYNAPSE86_L,
};

// connection12_synapse86 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse86States state;
} Connection12Synapse86;

// connection12_synapse86 Initialisation function
void Connection12Synapse86Init(Connection12Synapse86* me);

// connection12_synapse86 Execution function
void Connection12Synapse86Run(Connection12Synapse86* me);

#endif // CONNECTION12_SYNAPSE86_H_