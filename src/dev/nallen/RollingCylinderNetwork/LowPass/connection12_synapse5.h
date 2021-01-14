#ifndef CONNECTION12_SYNAPSE5_H_
#define CONNECTION12_SYNAPSE5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse5 States
enum Connection12Synapse5States {
    CONNECTION12_SYNAPSE5_L,
};

// connection12_synapse5 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse5States state;
} Connection12Synapse5;

// connection12_synapse5 Initialisation function
void Connection12Synapse5Init(Connection12Synapse5* me);

// connection12_synapse5 Execution function
void Connection12Synapse5Run(Connection12Synapse5* me);

#endif // CONNECTION12_SYNAPSE5_H_