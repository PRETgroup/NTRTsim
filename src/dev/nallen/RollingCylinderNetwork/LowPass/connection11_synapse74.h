#ifndef CONNECTION11_SYNAPSE74_H_
#define CONNECTION11_SYNAPSE74_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse74 States
enum Connection11Synapse74States {
    CONNECTION11_SYNAPSE74_L,
};

// connection11_synapse74 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse74States state;
} Connection11Synapse74;

// connection11_synapse74 Initialisation function
void Connection11Synapse74Init(Connection11Synapse74* me);

// connection11_synapse74 Execution function
void Connection11Synapse74Run(Connection11Synapse74* me);

#endif // CONNECTION11_SYNAPSE74_H_