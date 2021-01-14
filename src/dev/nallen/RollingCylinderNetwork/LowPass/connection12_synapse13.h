#ifndef CONNECTION12_SYNAPSE13_H_
#define CONNECTION12_SYNAPSE13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse13 States
enum Connection12Synapse13States {
    CONNECTION12_SYNAPSE13_L,
};

// connection12_synapse13 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse13States state;
} Connection12Synapse13;

// connection12_synapse13 Initialisation function
void Connection12Synapse13Init(Connection12Synapse13* me);

// connection12_synapse13 Execution function
void Connection12Synapse13Run(Connection12Synapse13* me);

#endif // CONNECTION12_SYNAPSE13_H_