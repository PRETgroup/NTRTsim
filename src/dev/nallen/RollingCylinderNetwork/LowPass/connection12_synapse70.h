#ifndef CONNECTION12_SYNAPSE70_H_
#define CONNECTION12_SYNAPSE70_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse70 States
enum Connection12Synapse70States {
    CONNECTION12_SYNAPSE70_L,
};

// connection12_synapse70 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse70States state;
} Connection12Synapse70;

// connection12_synapse70 Initialisation function
void Connection12Synapse70Init(Connection12Synapse70* me);

// connection12_synapse70 Execution function
void Connection12Synapse70Run(Connection12Synapse70* me);

#endif // CONNECTION12_SYNAPSE70_H_