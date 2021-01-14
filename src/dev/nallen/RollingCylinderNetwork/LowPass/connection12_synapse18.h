#ifndef CONNECTION12_SYNAPSE18_H_
#define CONNECTION12_SYNAPSE18_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse18 States
enum Connection12Synapse18States {
    CONNECTION12_SYNAPSE18_L,
};

// connection12_synapse18 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse18States state;
} Connection12Synapse18;

// connection12_synapse18 Initialisation function
void Connection12Synapse18Init(Connection12Synapse18* me);

// connection12_synapse18 Execution function
void Connection12Synapse18Run(Connection12Synapse18* me);

#endif // CONNECTION12_SYNAPSE18_H_