#ifndef CONNECTION13_SYNAPSE35_H_
#define CONNECTION13_SYNAPSE35_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse35 States
enum Connection13Synapse35States {
    CONNECTION13_SYNAPSE35_L,
};

// connection13_synapse35 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse35States state;
} Connection13Synapse35;

// connection13_synapse35 Initialisation function
void Connection13Synapse35Init(Connection13Synapse35* me);

// connection13_synapse35 Execution function
void Connection13Synapse35Run(Connection13Synapse35* me);

#endif // CONNECTION13_SYNAPSE35_H_