#ifndef CONNECTION11_SYNAPSE20_H_
#define CONNECTION11_SYNAPSE20_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse20 States
enum Connection11Synapse20States {
    CONNECTION11_SYNAPSE20_L,
};

// connection11_synapse20 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse20States state;
} Connection11Synapse20;

// connection11_synapse20 Initialisation function
void Connection11Synapse20Init(Connection11Synapse20* me);

// connection11_synapse20 Execution function
void Connection11Synapse20Run(Connection11Synapse20* me);

#endif // CONNECTION11_SYNAPSE20_H_