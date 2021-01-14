#ifndef CONNECTION11_SYNAPSE55_H_
#define CONNECTION11_SYNAPSE55_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse55 States
enum Connection11Synapse55States {
    CONNECTION11_SYNAPSE55_L,
};

// connection11_synapse55 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse55States state;
} Connection11Synapse55;

// connection11_synapse55 Initialisation function
void Connection11Synapse55Init(Connection11Synapse55* me);

// connection11_synapse55 Execution function
void Connection11Synapse55Run(Connection11Synapse55* me);

#endif // CONNECTION11_SYNAPSE55_H_