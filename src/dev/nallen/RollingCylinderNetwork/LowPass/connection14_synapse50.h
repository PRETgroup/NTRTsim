#ifndef CONNECTION14_SYNAPSE50_H_
#define CONNECTION14_SYNAPSE50_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse50 States
enum Connection14Synapse50States {
    CONNECTION14_SYNAPSE50_L,
};

// connection14_synapse50 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse50States state;
} Connection14Synapse50;

// connection14_synapse50 Initialisation function
void Connection14Synapse50Init(Connection14Synapse50* me);

// connection14_synapse50 Execution function
void Connection14Synapse50Run(Connection14Synapse50* me);

#endif // CONNECTION14_SYNAPSE50_H_