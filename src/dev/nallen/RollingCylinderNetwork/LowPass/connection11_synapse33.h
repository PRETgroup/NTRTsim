#ifndef CONNECTION11_SYNAPSE33_H_
#define CONNECTION11_SYNAPSE33_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse33 States
enum Connection11Synapse33States {
    CONNECTION11_SYNAPSE33_L,
};

// connection11_synapse33 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse33States state;
} Connection11Synapse33;

// connection11_synapse33 Initialisation function
void Connection11Synapse33Init(Connection11Synapse33* me);

// connection11_synapse33 Execution function
void Connection11Synapse33Run(Connection11Synapse33* me);

#endif // CONNECTION11_SYNAPSE33_H_