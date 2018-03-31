//Machine Learning
//Christopher Tyler Austin


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


float sigmoid(float input)//this is the sigmoid function to squash outputs into (0,1) range
{
    float output;
    output = 1.0/(1.0+exp(-input));
    return output;
}

float sigmoid_deriv(float input)//sigmoid deriv
{
    float output;
    output = sigmoid(input)*(1.0-sigmoid(input));
    return output;
}

float rand01()//number between 0,1
{
    return (float)rand()/RAND_MAX;
}

float randm()//this givs me a number btween -2,2
{
   float stat =  rand01()*4 - 2;
   return stat;
}

struct data_pts{
  float height;//in inches
  float weight;// in pounds 
  float gender;// 0 for male 1 for female 
};


int main(void)
{
    srand(time(NULL));
    int numberofnodes = 0;
    float weights_layer1[numberofnodes] = randm();
    float b = randm();
    
    
   return 0;
    
}
