#ifndef CONNECTION14_SYNAPSE82_H_
#define CONNECTION14_SYNAPSE82_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection14_synapse82 States
enum Connection14Synapse82States {
    CONNECTION14_SYNAPSE82_L,
};

// connection14_synapse82 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection14Synapse82States state;
} Connection14Synapse82;

// connection14_synapse82 Initialisation function
void Connection14Synapse82Init(Connection14Synapse82* me);

// connection14_synapse82 Execution function
void Connection14Synapse82Run(Connection14Synapse82* me);

#endif // CONNECTION14_SYNAPSE82_H_