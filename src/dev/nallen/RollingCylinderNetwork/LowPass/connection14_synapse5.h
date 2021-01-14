#ifndef CONNECTION14_SYNAPSE5_H_
#define CONNECTION14_SYNAPSE5_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse5 States
enum Connection14Synapse5States {
    CONNECTION14_SYNAPSE5_L,
};

// connection14_synapse5 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse5States state;
} Connection14Synapse5;

// connection14_synapse5 Initialisation function
void Connection14Synapse5Init(Connection14Synapse5* me);

// connection14_synapse5 Execution function
void Connection14Synapse5Run(Connection14Synapse5* me);

#endif // CONNECTION14_SYNAPSE5_H_