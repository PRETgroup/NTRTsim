#ifndef CONNECTION11_SYNAPSE4_H_
#define CONNECTION11_SYNAPSE4_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse4 States
enum Connection11Synapse4States {
    CONNECTION11_SYNAPSE4_L,
};

// connection11_synapse4 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse4States state;
} Connection11Synapse4;

// connection11_synapse4 Initialisation function
void Connection11Synapse4Init(Connection11Synapse4* me);

// connection11_synapse4 Execution function
void Connection11Synapse4Run(Connection11Synapse4* me);

#endif // CONNECTION11_SYNAPSE4_H_