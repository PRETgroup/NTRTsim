#ifndef CONNECTION11_SYNAPSE1_H_
#define CONNECTION11_SYNAPSE1_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse1 States
enum Connection11Synapse1States {
    CONNECTION11_SYNAPSE1_L,
};

// connection11_synapse1 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse1States state;
} Connection11Synapse1;

// connection11_synapse1 Initialisation function
void Connection11Synapse1Init(Connection11Synapse1* me);

// connection11_synapse1 Execution function
void Connection11Synapse1Run(Connection11Synapse1* me);

#endif // CONNECTION11_SYNAPSE1_H_