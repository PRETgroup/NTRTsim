#ifndef CONNECTION14_SYNAPSE64_H_
#define CONNECTION14_SYNAPSE64_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse64 States
enum Connection14Synapse64States {
    CONNECTION14_SYNAPSE64_L,
};

// connection14_synapse64 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse64States state;
} Connection14Synapse64;

// connection14_synapse64 Initialisation function
void Connection14Synapse64Init(Connection14Synapse64* me);

// connection14_synapse64 Execution function
void Connection14Synapse64Run(Connection14Synapse64* me);

#endif // CONNECTION14_SYNAPSE64_H_