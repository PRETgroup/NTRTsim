#ifndef CONNECTION11_SYNAPSE9_H_
#define CONNECTION11_SYNAPSE9_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse9 States
enum Connection11Synapse9States {
    CONNECTION11_SYNAPSE9_L,
};

// connection11_synapse9 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse9States state;
} Connection11Synapse9;

// connection11_synapse9 Initialisation function
void Connection11Synapse9Init(Connection11Synapse9* me);

// connection11_synapse9 Execution function
void Connection11Synapse9Run(Connection11Synapse9* me);

#endif // CONNECTION11_SYNAPSE9_H_