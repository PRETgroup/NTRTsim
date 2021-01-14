#ifndef CONNECTION11_SYNAPSE26_H_
#define CONNECTION11_SYNAPSE26_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse26 States
enum Connection11Synapse26States {
    CONNECTION11_SYNAPSE26_L,
};

// connection11_synapse26 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse26States state;
} Connection11Synapse26;

// connection11_synapse26 Initialisation function
void Connection11Synapse26Init(Connection11Synapse26* me);

// connection11_synapse26 Execution function
void Connection11Synapse26Run(Connection11Synapse26* me);

#endif // CONNECTION11_SYNAPSE26_H_