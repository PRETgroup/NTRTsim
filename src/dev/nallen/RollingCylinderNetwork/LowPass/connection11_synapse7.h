#ifndef CONNECTION11_SYNAPSE7_H_
#define CONNECTION11_SYNAPSE7_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse7 States
enum Connection11Synapse7States {
    CONNECTION11_SYNAPSE7_L,
};

// connection11_synapse7 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse7States state;
} Connection11Synapse7;

// connection11_synapse7 Initialisation function
void Connection11Synapse7Init(Connection11Synapse7* me);

// connection11_synapse7 Execution function
void Connection11Synapse7Run(Connection11Synapse7* me);

#endif // CONNECTION11_SYNAPSE7_H_