#ifndef CONNECTION6_SYNAPSE82_H_
#define CONNECTION6_SYNAPSE82_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse82 States
enum Connection6Synapse82States {
    CONNECTION6_SYNAPSE82_L,
};

// connection6_synapse82 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse82States state;
} Connection6Synapse82;

// connection6_synapse82 Initialisation function
void Connection6Synapse82Init(Connection6Synapse82* me);

// connection6_synapse82 Execution function
void Connection6Synapse82Run(Connection6Synapse82* me);

#endif // CONNECTION6_SYNAPSE82_H_