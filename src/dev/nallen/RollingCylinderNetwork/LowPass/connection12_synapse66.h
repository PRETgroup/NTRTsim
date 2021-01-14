#ifndef CONNECTION12_SYNAPSE66_H_
#define CONNECTION12_SYNAPSE66_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection12_synapse66 States
enum Connection12Synapse66States {
    CONNECTION12_SYNAPSE66_L,
};

// connection12_synapse66 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection12Synapse66States state;
} Connection12Synapse66;

// connection12_synapse66 Initialisation function
void Connection12Synapse66Init(Connection12Synapse66* me);

// connection12_synapse66 Execution function
void Connection12Synapse66Run(Connection12Synapse66* me);

#endif // CONNECTION12_SYNAPSE66_H_