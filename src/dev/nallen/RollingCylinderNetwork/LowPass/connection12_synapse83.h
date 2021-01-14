#ifndef CONNECTION12_SYNAPSE83_H_
#define CONNECTION12_SYNAPSE83_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse83 States
enum Connection12Synapse83States {
    CONNECTION12_SYNAPSE83_L,
};

// connection12_synapse83 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse83States state;
} Connection12Synapse83;

// connection12_synapse83 Initialisation function
void Connection12Synapse83Init(Connection12Synapse83* me);

// connection12_synapse83 Execution function
void Connection12Synapse83Run(Connection12Synapse83* me);

#endif // CONNECTION12_SYNAPSE83_H_