#ifndef CONNECTION12_SYNAPSE96_H_
#define CONNECTION12_SYNAPSE96_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse96 States
enum Connection12Synapse96States {
    CONNECTION12_SYNAPSE96_L,
};

// connection12_synapse96 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse96States state;
} Connection12Synapse96;

// connection12_synapse96 Initialisation function
void Connection12Synapse96Init(Connection12Synapse96* me);

// connection12_synapse96 Execution function
void Connection12Synapse96Run(Connection12Synapse96* me);

#endif // CONNECTION12_SYNAPSE96_H_