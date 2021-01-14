#ifndef CONNECTION14_SYNAPSE66_H_
#define CONNECTION14_SYNAPSE66_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse66 States
enum Connection14Synapse66States {
    CONNECTION14_SYNAPSE66_L,
};

// connection14_synapse66 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse66States state;
} Connection14Synapse66;

// connection14_synapse66 Initialisation function
void Connection14Synapse66Init(Connection14Synapse66* me);

// connection14_synapse66 Execution function
void Connection14Synapse66Run(Connection14Synapse66* me);

#endif // CONNECTION14_SYNAPSE66_H_