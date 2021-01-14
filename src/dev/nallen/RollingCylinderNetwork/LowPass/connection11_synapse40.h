#ifndef CONNECTION11_SYNAPSE40_H_
#define CONNECTION11_SYNAPSE40_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse40 States
enum Connection11Synapse40States {
    CONNECTION11_SYNAPSE40_L,
};

// connection11_synapse40 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse40States state;
} Connection11Synapse40;

// connection11_synapse40 Initialisation function
void Connection11Synapse40Init(Connection11Synapse40* me);

// connection11_synapse40 Execution function
void Connection11Synapse40Run(Connection11Synapse40* me);

#endif // CONNECTION11_SYNAPSE40_H_