#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int usage(char *name);

int main(int argc, char **argv)
{
  if(argc != 7) return usage(argv[0]);
  
  float L = atof(argv[1]);
  float a = atof(argv[2]);
  float b = atof(argv[3]);
  float N = atof(argv[4]);
  float bf = atof(argv[5]);
  float db = atof(argv[6]);
  float x = 1;


  for(b; b<bf; b+=db)
  {
    for(int i = 0; i < N; i++)
    {
      printf("%f\t%f\n",b,x);
      x = L*x*pow(1+a*x,-b);
    }
  }
  

  return 0;
}


int usage(char *name)
{
  fprintf(stderr,"usage: %s L a b N bf db\n",name);
  fprintf(stderr,"example: %s 100 1 2 200 14 0.01\n",name);
  return 1;
}
