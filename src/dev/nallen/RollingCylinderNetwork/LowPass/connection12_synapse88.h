#ifndef CONNECTION12_SYNAPSE88_H_
#define CONNECTION12_SYNAPSE88_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse88 States
enum Connection12Synapse88States {
    CONNECTION12_SYNAPSE88_L,
};

// connection12_synapse88 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse88States state;
} Connection12Synapse88;

// connection12_synapse88 Initialisation function
void Connection12Synapse88Init(Connection12Synapse88* me);

// connection12_synapse88 Execution function
void Connection12Synapse88Run(Connection12Synapse88* me);

#endif // CONNECTION12_SYNAPSE88_H_