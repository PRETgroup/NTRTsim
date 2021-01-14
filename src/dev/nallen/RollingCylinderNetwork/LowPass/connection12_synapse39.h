#ifndef CONNECTION12_SYNAPSE39_H_
#define CONNECTION12_SYNAPSE39_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse39 States
enum Connection12Synapse39States {
    CONNECTION12_SYNAPSE39_L,
};

// connection12_synapse39 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse39States state;
} Connection12Synapse39;

// connection12_synapse39 Initialisation function
void Connection12Synapse39Init(Connection12Synapse39* me);

// connection12_synapse39 Execution function
void Connection12Synapse39Run(Connection12Synapse39* me);

#endif // CONNECTION12_SYNAPSE39_H_