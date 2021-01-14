#ifndef CONNECTION12_SYNAPSE78_H_
#define CONNECTION12_SYNAPSE78_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse78 States
enum Connection12Synapse78States {
    CONNECTION12_SYNAPSE78_L,
};

// connection12_synapse78 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse78States state;
} Connection12Synapse78;

// connection12_synapse78 Initialisation function
void Connection12Synapse78Init(Connection12Synapse78* me);

// connection12_synapse78 Execution function
void Connection12Synapse78Run(Connection12Synapse78* me);

#endif // CONNECTION12_SYNAPSE78_H_