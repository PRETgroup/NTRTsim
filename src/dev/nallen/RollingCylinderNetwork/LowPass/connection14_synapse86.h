#ifndef CONNECTION14_SYNAPSE86_H_
#define CONNECTION14_SYNAPSE86_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse86 States
enum Connection14Synapse86States {
    CONNECTION14_SYNAPSE86_L,
};

// connection14_synapse86 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse86States state;
} Connection14Synapse86;

// connection14_synapse86 Initialisation function
void Connection14Synapse86Init(Connection14Synapse86* me);

// connection14_synapse86 Execution function
void Connection14Synapse86Run(Connection14Synapse86* me);

#endif // CONNECTION14_SYNAPSE86_H_