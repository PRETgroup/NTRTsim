#ifndef CONNECTION12_SYNAPSE89_H_
#define CONNECTION12_SYNAPSE89_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse89 States
enum Connection12Synapse89States {
    CONNECTION12_SYNAPSE89_L,
};

// connection12_synapse89 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse89States state;
} Connection12Synapse89;

// connection12_synapse89 Initialisation function
void Connection12Synapse89Init(Connection12Synapse89* me);

// connection12_synapse89 Execution function
void Connection12Synapse89Run(Connection12Synapse89* me);

#endif // CONNECTION12_SYNAPSE89_H_