#ifndef CONNECTION6_SYNAPSE66_H_
#define CONNECTION6_SYNAPSE66_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection6_synapse66 States
enum Connection6Synapse66States {
    CONNECTION6_SYNAPSE66_L,
};

// connection6_synapse66 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection6Synapse66States state;
} Connection6Synapse66;

// connection6_synapse66 Initialisation function
void Connection6Synapse66Init(Connection6Synapse66* me);

// connection6_synapse66 Execution function
void Connection6Synapse66Run(Connection6Synapse66* me);

#endif // CONNECTION6_SYNAPSE66_H_