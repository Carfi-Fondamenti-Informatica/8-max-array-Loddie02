#include "lib.h"

float max( const float numeri[], int dim){
    numeri[dim];
    float max = numeri[0];
    for(i=0; i<dim; i++){
        if(max<numeri[i]){
            max=numeri[i];
        }
    }
    return max;
}
