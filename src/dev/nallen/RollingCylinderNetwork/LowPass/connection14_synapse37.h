#ifndef CONNECTION14_SYNAPSE37_H_
#define CONNECTION14_SYNAPSE37_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse37 States
enum Connection14Synapse37States {
    CONNECTION14_SYNAPSE37_L,
};

// connection14_synapse37 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse37States state;
} Connection14Synapse37;

// connection14_synapse37 Initialisation function
void Connection14Synapse37Init(Connection14Synapse37* me);

// connection14_synapse37 Execution function
void Connection14Synapse37Run(Connection14Synapse37* me);

#endif // CONNECTION14_SYNAPSE37_H_