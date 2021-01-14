#ifndef CONNECTION14_SYNAPSE35_H_
#define CONNECTION14_SYNAPSE35_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse35 States
enum Connection14Synapse35States {
    CONNECTION14_SYNAPSE35_L,
};

// connection14_synapse35 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse35States state;
} Connection14Synapse35;

// connection14_synapse35 Initialisation function
void Connection14Synapse35Init(Connection14Synapse35* me);

// connection14_synapse35 Execution function
void Connection14Synapse35Run(Connection14Synapse35* me);

#endif // CONNECTION14_SYNAPSE35_H_