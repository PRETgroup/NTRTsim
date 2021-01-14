#ifndef CONNECTION12_SYNAPSE99_H_
#define CONNECTION12_SYNAPSE99_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse99 States
enum Connection12Synapse99States {
    CONNECTION12_SYNAPSE99_L,
};

// connection12_synapse99 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse99States state;
} Connection12Synapse99;

// connection12_synapse99 Initialisation function
void Connection12Synapse99Init(Connection12Synapse99* me);

// connection12_synapse99 Execution function
void Connection12Synapse99Run(Connection12Synapse99* me);

#endif // CONNECTION12_SYNAPSE99_H_