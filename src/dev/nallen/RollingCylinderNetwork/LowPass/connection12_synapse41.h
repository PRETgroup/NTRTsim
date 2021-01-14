#ifndef CONNECTION12_SYNAPSE41_H_
#define CONNECTION12_SYNAPSE41_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse41 States
enum Connection12Synapse41States {
    CONNECTION12_SYNAPSE41_L,
};

// connection12_synapse41 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse41States state;
} Connection12Synapse41;

// connection12_synapse41 Initialisation function
void Connection12Synapse41Init(Connection12Synapse41* me);

// connection12_synapse41 Execution function
void Connection12Synapse41Run(Connection12Synapse41* me);

#endif // CONNECTION12_SYNAPSE41_H_