#ifndef CONNECTION12_SYNAPSE44_H_
#define CONNECTION12_SYNAPSE44_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse44 States
enum Connection12Synapse44States {
    CONNECTION12_SYNAPSE44_L,
};

// connection12_synapse44 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse44States state;
} Connection12Synapse44;

// connection12_synapse44 Initialisation function
void Connection12Synapse44Init(Connection12Synapse44* me);

// connection12_synapse44 Execution function
void Connection12Synapse44Run(Connection12Synapse44* me);

#endif // CONNECTION12_SYNAPSE44_H_