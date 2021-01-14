#ifndef CONNECTION11_SYNAPSE72_H_
#define CONNECTION11_SYNAPSE72_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse72 States
enum Connection11Synapse72States {
    CONNECTION11_SYNAPSE72_L,
};

// connection11_synapse72 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse72States state;
} Connection11Synapse72;

// connection11_synapse72 Initialisation function
void Connection11Synapse72Init(Connection11Synapse72* me);

// connection11_synapse72 Execution function
void Connection11Synapse72Run(Connection11Synapse72* me);

#endif // CONNECTION11_SYNAPSE72_H_