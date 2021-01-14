#ifndef CONNECTION11_SYNAPSE24_H_
#define CONNECTION11_SYNAPSE24_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse24 States
enum Connection11Synapse24States {
    CONNECTION11_SYNAPSE24_L,
};

// connection11_synapse24 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse24States state;
} Connection11Synapse24;

// connection11_synapse24 Initialisation function
void Connection11Synapse24Init(Connection11Synapse24* me);

// connection11_synapse24 Execution function
void Connection11Synapse24Run(Connection11Synapse24* me);

#endif // CONNECTION11_SYNAPSE24_H_