#ifndef CONNECTION11_SYNAPSE66_H_
#define CONNECTION11_SYNAPSE66_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <stdbool.h>

#include "config.h"

// connection11_synapse66 States
enum Connection11Synapse66States {
    CONNECTION11_SYNAPSE66_L,
};

// connection11_synapse66 Data Struct
typedef struct {
    
    // Declare Inputs
    double in;
    
    // Declare Outputs
    double out;
    
    // Declare Internal Variables
    double alpha;

    // State
    enum Connection11Synapse66States state;
} Connection11Synapse66;

// connection11_synapse66 Initialisation function
void Connection11Synapse66Init(Connection11Synapse66* me);

// connection11_synapse66 Execution function
void Connection11Synapse66Run(Connection11Synapse66* me);

#endif // CONNECTION11_SYNAPSE66_H_