#ifndef CONNECTION14_SYNAPSE44_H_
#define CONNECTION14_SYNAPSE44_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse44 States
enum Connection14Synapse44States {
    CONNECTION14_SYNAPSE44_L,
};

// connection14_synapse44 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse44States state;
} Connection14Synapse44;

// connection14_synapse44 Initialisation function
void Connection14Synapse44Init(Connection14Synapse44* me);

// connection14_synapse44 Execution function
void Connection14Synapse44Run(Connection14Synapse44* me);

#endif // CONNECTION14_SYNAPSE44_H_