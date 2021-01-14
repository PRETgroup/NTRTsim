#ifndef CONNECTION11_SYNAPSE60_H_
#define CONNECTION11_SYNAPSE60_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse60 States
enum Connection11Synapse60States {
    CONNECTION11_SYNAPSE60_L,
};

// connection11_synapse60 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse60States state;
} Connection11Synapse60;

// connection11_synapse60 Initialisation function
void Connection11Synapse60Init(Connection11Synapse60* me);

// connection11_synapse60 Execution function
void Connection11Synapse60Run(Connection11Synapse60* me);

#endif // CONNECTION11_SYNAPSE60_H_