#ifndef CONNECTION11_SYNAPSE49_H_
#define CONNECTION11_SYNAPSE49_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse49 States
enum Connection11Synapse49States {
    CONNECTION11_SYNAPSE49_L,
};

// connection11_synapse49 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse49States state;
} Connection11Synapse49;

// connection11_synapse49 Initialisation function
void Connection11Synapse49Init(Connection11Synapse49* me);

// connection11_synapse49 Execution function
void Connection11Synapse49Run(Connection11Synapse49* me);

#endif // CONNECTION11_SYNAPSE49_H_