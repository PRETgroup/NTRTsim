#ifndef CONNECTION14_SYNAPSE78_H_
#define CONNECTION14_SYNAPSE78_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse78 States
enum Connection14Synapse78States {
    CONNECTION14_SYNAPSE78_L,
};

// connection14_synapse78 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse78States state;
} Connection14Synapse78;

// connection14_synapse78 Initialisation function
void Connection14Synapse78Init(Connection14Synapse78* me);

// connection14_synapse78 Execution function
void Connection14Synapse78Run(Connection14Synapse78* me);

#endif // CONNECTION14_SYNAPSE78_H_