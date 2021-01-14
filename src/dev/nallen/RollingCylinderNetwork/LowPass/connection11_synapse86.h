#ifndef CONNECTION11_SYNAPSE86_H_
#define CONNECTION11_SYNAPSE86_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse86 States
enum Connection11Synapse86States {
    CONNECTION11_SYNAPSE86_L,
};

// connection11_synapse86 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse86States state;
} Connection11Synapse86;

// connection11_synapse86 Initialisation function
void Connection11Synapse86Init(Connection11Synapse86* me);

// connection11_synapse86 Execution function
void Connection11Synapse86Run(Connection11Synapse86* me);

#endif // CONNECTION11_SYNAPSE86_H_