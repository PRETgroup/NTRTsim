#ifndef CONNECTION12_SYNAPSE23_H_
#define CONNECTION12_SYNAPSE23_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse23 States
enum Connection12Synapse23States {
    CONNECTION12_SYNAPSE23_L,
};

// connection12_synapse23 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse23States state;
} Connection12Synapse23;

// connection12_synapse23 Initialisation function
void Connection12Synapse23Init(Connection12Synapse23* me);

// connection12_synapse23 Execution function
void Connection12Synapse23Run(Connection12Synapse23* me);

#endif // CONNECTION12_SYNAPSE23_H_