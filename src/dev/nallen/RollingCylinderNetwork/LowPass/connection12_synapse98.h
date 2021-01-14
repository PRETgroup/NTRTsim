#ifndef CONNECTION12_SYNAPSE98_H_
#define CONNECTION12_SYNAPSE98_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse98 States
enum Connection12Synapse98States {
    CONNECTION12_SYNAPSE98_L,
};

// connection12_synapse98 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse98States state;
} Connection12Synapse98;

// connection12_synapse98 Initialisation function
void Connection12Synapse98Init(Connection12Synapse98* me);

// connection12_synapse98 Execution function
void Connection12Synapse98Run(Connection12Synapse98* me);

#endif // CONNECTION12_SYNAPSE98_H_