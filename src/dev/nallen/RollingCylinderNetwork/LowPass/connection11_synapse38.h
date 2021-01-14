#ifndef CONNECTION11_SYNAPSE38_H_
#define CONNECTION11_SYNAPSE38_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse38 States
enum Connection11Synapse38States {
    CONNECTION11_SYNAPSE38_L,
};

// connection11_synapse38 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse38States state;
} Connection11Synapse38;

// connection11_synapse38 Initialisation function
void Connection11Synapse38Init(Connection11Synapse38* me);

// connection11_synapse38 Execution function
void Connection11Synapse38Run(Connection11Synapse38* me);

#endif // CONNECTION11_SYNAPSE38_H_