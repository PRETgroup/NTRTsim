#ifndef CONNECTION12_SYNAPSE50_H_
#define CONNECTION12_SYNAPSE50_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse50 States
enum Connection12Synapse50States {
    CONNECTION12_SYNAPSE50_L,
};

// connection12_synapse50 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse50States state;
} Connection12Synapse50;

// connection12_synapse50 Initialisation function
void Connection12Synapse50Init(Connection12Synapse50* me);

// connection12_synapse50 Execution function
void Connection12Synapse50Run(Connection12Synapse50* me);

#endif // CONNECTION12_SYNAPSE50_H_