#ifndef CONNECTION11_SYNAPSE32_H_
#define CONNECTION11_SYNAPSE32_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse32 States
enum Connection11Synapse32States {
    CONNECTION11_SYNAPSE32_L,
};

// connection11_synapse32 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse32States state;
} Connection11Synapse32;

// connection11_synapse32 Initialisation function
void Connection11Synapse32Init(Connection11Synapse32* me);

// connection11_synapse32 Execution function
void Connection11Synapse32Run(Connection11Synapse32* me);

#endif // CONNECTION11_SYNAPSE32_H_