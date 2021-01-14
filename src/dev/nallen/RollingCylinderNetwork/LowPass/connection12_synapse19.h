#ifndef CONNECTION12_SYNAPSE19_H_
#define CONNECTION12_SYNAPSE19_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse19 States
enum Connection12Synapse19States {
    CONNECTION12_SYNAPSE19_L,
};

// connection12_synapse19 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse19States state;
} Connection12Synapse19;

// connection12_synapse19 Initialisation function
void Connection12Synapse19Init(Connection12Synapse19* me);

// connection12_synapse19 Execution function
void Connection12Synapse19Run(Connection12Synapse19* me);

#endif // CONNECTION12_SYNAPSE19_H_