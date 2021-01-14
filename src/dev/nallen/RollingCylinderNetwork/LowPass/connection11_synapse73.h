#ifndef CONNECTION11_SYNAPSE73_H_
#define CONNECTION11_SYNAPSE73_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse73 States
enum Connection11Synapse73States {
    CONNECTION11_SYNAPSE73_L,
};

// connection11_synapse73 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse73States state;
} Connection11Synapse73;

// connection11_synapse73 Initialisation function
void Connection11Synapse73Init(Connection11Synapse73* me);

// connection11_synapse73 Execution function
void Connection11Synapse73Run(Connection11Synapse73* me);

#endif // CONNECTION11_SYNAPSE73_H_