#ifndef CONNECTION14_SYNAPSE21_H_
#define CONNECTION14_SYNAPSE21_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse21 States
enum Connection14Synapse21States {
    CONNECTION14_SYNAPSE21_L,
};

// connection14_synapse21 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse21States state;
} Connection14Synapse21;

// connection14_synapse21 Initialisation function
void Connection14Synapse21Init(Connection14Synapse21* me);

// connection14_synapse21 Execution function
void Connection14Synapse21Run(Connection14Synapse21* me);

#endif // CONNECTION14_SYNAPSE21_H_