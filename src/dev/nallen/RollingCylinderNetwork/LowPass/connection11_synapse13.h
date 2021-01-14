#ifndef CONNECTION11_SYNAPSE13_H_
#define CONNECTION11_SYNAPSE13_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse13 States
enum Connection11Synapse13States {
    CONNECTION11_SYNAPSE13_L,
};

// connection11_synapse13 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse13States state;
} Connection11Synapse13;

// connection11_synapse13 Initialisation function
void Connection11Synapse13Init(Connection11Synapse13* me);

// connection11_synapse13 Execution function
void Connection11Synapse13Run(Connection11Synapse13* me);

#endif // CONNECTION11_SYNAPSE13_H_