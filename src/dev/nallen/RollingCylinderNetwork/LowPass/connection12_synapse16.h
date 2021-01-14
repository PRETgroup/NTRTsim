#ifndef CONNECTION12_SYNAPSE16_H_
#define CONNECTION12_SYNAPSE16_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse16 States
enum Connection12Synapse16States {
    CONNECTION12_SYNAPSE16_L,
};

// connection12_synapse16 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse16States state;
} Connection12Synapse16;

// connection12_synapse16 Initialisation function
void Connection12Synapse16Init(Connection12Synapse16* me);

// connection12_synapse16 Execution function
void Connection12Synapse16Run(Connection12Synapse16* me);

#endif // CONNECTION12_SYNAPSE16_H_