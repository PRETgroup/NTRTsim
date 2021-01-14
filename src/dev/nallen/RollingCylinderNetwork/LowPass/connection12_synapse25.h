#ifndef CONNECTION12_SYNAPSE25_H_
#define CONNECTION12_SYNAPSE25_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse25 States
enum Connection12Synapse25States {
    CONNECTION12_SYNAPSE25_L,
};

// connection12_synapse25 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse25States state;
} Connection12Synapse25;

// connection12_synapse25 Initialisation function
void Connection12Synapse25Init(Connection12Synapse25* me);

// connection12_synapse25 Execution function
void Connection12Synapse25Run(Connection12Synapse25* me);

#endif // CONNECTION12_SYNAPSE25_H_