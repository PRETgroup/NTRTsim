#ifndef CONNECTION13_SYNAPSE66_H_
#define CONNECTION13_SYNAPSE66_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection13_synapse66 States
enum Connection13Synapse66States {
    CONNECTION13_SYNAPSE66_L,
};

// connection13_synapse66 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection13Synapse66States state;
} Connection13Synapse66;

// connection13_synapse66 Initialisation function
void Connection13Synapse66Init(Connection13Synapse66* me);

// connection13_synapse66 Execution function
void Connection13Synapse66Run(Connection13Synapse66* me);

#endif // CONNECTION13_SYNAPSE66_H_