#ifndef CONNECTION2_SYNAPSE66_H_
#define CONNECTION2_SYNAPSE66_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection2_synapse66 States
enum Connection2Synapse66States {
    CONNECTION2_SYNAPSE66_L,
};

// connection2_synapse66 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection2Synapse66States state;
} Connection2Synapse66;

// connection2_synapse66 Initialisation function
void Connection2Synapse66Init(Connection2Synapse66* me);

// connection2_synapse66 Execution function
void Connection2Synapse66Run(Connection2Synapse66* me);

#endif // CONNECTION2_SYNAPSE66_H_