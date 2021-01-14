#ifndef CONNECTION11_SYNAPSE80_H_
#define CONNECTION11_SYNAPSE80_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse80 States
enum Connection11Synapse80States {
    CONNECTION11_SYNAPSE80_L,
};

// connection11_synapse80 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse80States state;
} Connection11Synapse80;

// connection11_synapse80 Initialisation function
void Connection11Synapse80Init(Connection11Synapse80* me);

// connection11_synapse80 Execution function
void Connection11Synapse80Run(Connection11Synapse80* me);

#endif // CONNECTION11_SYNAPSE80_H_