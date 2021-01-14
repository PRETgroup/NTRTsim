#ifndef CONNECTION12_SYNAPSE37_H_
#define CONNECTION12_SYNAPSE37_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse37 States
enum Connection12Synapse37States {
    CONNECTION12_SYNAPSE37_L,
};

// connection12_synapse37 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse37States state;
} Connection12Synapse37;

// connection12_synapse37 Initialisation function
void Connection12Synapse37Init(Connection12Synapse37* me);

// connection12_synapse37 Execution function
void Connection12Synapse37Run(Connection12Synapse37* me);

#endif // CONNECTION12_SYNAPSE37_H_