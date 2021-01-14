#ifndef CONNECTION12_SYNAPSE35_H_
#define CONNECTION12_SYNAPSE35_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse35 States
enum Connection12Synapse35States {
    CONNECTION12_SYNAPSE35_L,
};

// connection12_synapse35 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse35States state;
} Connection12Synapse35;

// connection12_synapse35 Initialisation function
void Connection12Synapse35Init(Connection12Synapse35* me);

// connection12_synapse35 Execution function
void Connection12Synapse35Run(Connection12Synapse35* me);

#endif // CONNECTION12_SYNAPSE35_H_