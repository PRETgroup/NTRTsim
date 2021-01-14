#ifndef CONNECTION14_SYNAPSE88_H_
#define CONNECTION14_SYNAPSE88_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse88 States
enum Connection14Synapse88States {
    CONNECTION14_SYNAPSE88_L,
};

// connection14_synapse88 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse88States state;
} Connection14Synapse88;

// connection14_synapse88 Initialisation function
void Connection14Synapse88Init(Connection14Synapse88* me);

// connection14_synapse88 Execution function
void Connection14Synapse88Run(Connection14Synapse88* me);

#endif // CONNECTION14_SYNAPSE88_H_