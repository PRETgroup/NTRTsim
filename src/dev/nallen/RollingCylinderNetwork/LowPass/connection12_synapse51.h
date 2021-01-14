#ifndef CONNECTION12_SYNAPSE51_H_
#define CONNECTION12_SYNAPSE51_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse51 States
enum Connection12Synapse51States {
    CONNECTION12_SYNAPSE51_L,
};

// connection12_synapse51 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse51States state;
} Connection12Synapse51;

// connection12_synapse51 Initialisation function
void Connection12Synapse51Init(Connection12Synapse51* me);

// connection12_synapse51 Execution function
void Connection12Synapse51Run(Connection12Synapse51* me);

#endif // CONNECTION12_SYNAPSE51_H_