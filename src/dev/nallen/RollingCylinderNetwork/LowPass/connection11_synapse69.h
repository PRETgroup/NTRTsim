#ifndef CONNECTION11_SYNAPSE69_H_
#define CONNECTION11_SYNAPSE69_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse69 States
enum Connection11Synapse69States {
    CONNECTION11_SYNAPSE69_L,
};

// connection11_synapse69 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse69States state;
} Connection11Synapse69;

// connection11_synapse69 Initialisation function
void Connection11Synapse69Init(Connection11Synapse69* me);

// connection11_synapse69 Execution function
void Connection11Synapse69Run(Connection11Synapse69* me);

#endif // CONNECTION11_SYNAPSE69_H_