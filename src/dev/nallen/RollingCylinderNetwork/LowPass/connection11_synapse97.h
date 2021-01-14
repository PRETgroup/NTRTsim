#ifndef CONNECTION11_SYNAPSE97_H_
#define CONNECTION11_SYNAPSE97_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse97 States
enum Connection11Synapse97States {
    CONNECTION11_SYNAPSE97_L,
};

// connection11_synapse97 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse97States state;
} Connection11Synapse97;

// connection11_synapse97 Initialisation function
void Connection11Synapse97Init(Connection11Synapse97* me);

// connection11_synapse97 Execution function
void Connection11Synapse97Run(Connection11Synapse97* me);

#endif // CONNECTION11_SYNAPSE97_H_