#ifndef CONNECTION11_SYNAPSE35_H_
#define CONNECTION11_SYNAPSE35_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse35 States
enum Connection11Synapse35States {
    CONNECTION11_SYNAPSE35_L,
};

// connection11_synapse35 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse35States state;
} Connection11Synapse35;

// connection11_synapse35 Initialisation function
void Connection11Synapse35Init(Connection11Synapse35* me);

// connection11_synapse35 Execution function
void Connection11Synapse35Run(Connection11Synapse35* me);

#endif // CONNECTION11_SYNAPSE35_H_