#ifndef CONNECTION12_SYNAPSE54_H_
#define CONNECTION12_SYNAPSE54_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse54 States
enum Connection12Synapse54States {
    CONNECTION12_SYNAPSE54_L,
};

// connection12_synapse54 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse54States state;
} Connection12Synapse54;

// connection12_synapse54 Initialisation function
void Connection12Synapse54Init(Connection12Synapse54* me);

// connection12_synapse54 Execution function
void Connection12Synapse54Run(Connection12Synapse54* me);

#endif // CONNECTION12_SYNAPSE54_H_