#ifndef CONNECTION0_SYNAPSE82_H_
#define CONNECTION0_SYNAPSE82_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection0_synapse82 States
enum Connection0Synapse82States {
    CONNECTION0_SYNAPSE82_L,
};

// connection0_synapse82 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection0Synapse82States state;
} Connection0Synapse82;

// connection0_synapse82 Initialisation function
void Connection0Synapse82Init(Connection0Synapse82* me);

// connection0_synapse82 Execution function
void Connection0Synapse82Run(Connection0Synapse82* me);

#endif // CONNECTION0_SYNAPSE82_H_