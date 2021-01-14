#ifndef CONNECTION12_SYNAPSE12_H_
#define CONNECTION12_SYNAPSE12_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse12 States
enum Connection12Synapse12States {
    CONNECTION12_SYNAPSE12_L,
};

// connection12_synapse12 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse12States state;
} Connection12Synapse12;

// connection12_synapse12 Initialisation function
void Connection12Synapse12Init(Connection12Synapse12* me);

// connection12_synapse12 Execution function
void Connection12Synapse12Run(Connection12Synapse12* me);

#endif // CONNECTION12_SYNAPSE12_H_