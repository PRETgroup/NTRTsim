#ifndef CONNECTION11_SYNAPSE34_H_
#define CONNECTION11_SYNAPSE34_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse34 States
enum Connection11Synapse34States {
    CONNECTION11_SYNAPSE34_L,
};

// connection11_synapse34 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse34States state;
} Connection11Synapse34;

// connection11_synapse34 Initialisation function
void Connection11Synapse34Init(Connection11Synapse34* me);

// connection11_synapse34 Execution function
void Connection11Synapse34Run(Connection11Synapse34* me);

#endif // CONNECTION11_SYNAPSE34_H_