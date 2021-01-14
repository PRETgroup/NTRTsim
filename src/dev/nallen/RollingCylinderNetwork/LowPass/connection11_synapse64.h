#ifndef CONNECTION11_SYNAPSE64_H_
#define CONNECTION11_SYNAPSE64_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse64 States
enum Connection11Synapse64States {
    CONNECTION11_SYNAPSE64_L,
};

// connection11_synapse64 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse64States state;
} Connection11Synapse64;

// connection11_synapse64 Initialisation function
void Connection11Synapse64Init(Connection11Synapse64* me);

// connection11_synapse64 Execution function
void Connection11Synapse64Run(Connection11Synapse64* me);

#endif // CONNECTION11_SYNAPSE64_H_