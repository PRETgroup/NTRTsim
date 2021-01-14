#ifndef CONNECTION11_SYNAPSE53_H_
#define CONNECTION11_SYNAPSE53_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse53 States
enum Connection11Synapse53States {
    CONNECTION11_SYNAPSE53_L,
};

// connection11_synapse53 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse53States state;
} Connection11Synapse53;

// connection11_synapse53 Initialisation function
void Connection11Synapse53Init(Connection11Synapse53* me);

// connection11_synapse53 Execution function
void Connection11Synapse53Run(Connection11Synapse53* me);

#endif // CONNECTION11_SYNAPSE53_H_