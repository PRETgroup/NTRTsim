#ifndef CONNECTION12_SYNAPSE7_H_
#define CONNECTION12_SYNAPSE7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse7 States
enum Connection12Synapse7States {
    CONNECTION12_SYNAPSE7_L,
};

// connection12_synapse7 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse7States state;
} Connection12Synapse7;

// connection12_synapse7 Initialisation function
void Connection12Synapse7Init(Connection12Synapse7* me);

// connection12_synapse7 Execution function
void Connection12Synapse7Run(Connection12Synapse7* me);

#endif // CONNECTION12_SYNAPSE7_H_