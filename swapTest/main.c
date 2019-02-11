//
//  main.c
//  swapTest
//
//  Created by Brian on 2/11/19.
//  Copyright © 2019 Brian Bleck. All rights reserved.
//

#include <stdio.h>

void swapxy(int *x, int *y);

int main(void) {
  int x = 11;
  int y = 333;
  printf("x: %d\ny: %d\n", x, y);
  swapxy(&x, &y);
  printf("values have been swapped.\nx: %d\ny: %d\n", x, y);
  return 0;
}

void swapxy(int *x, int *y){
  int tempInt = *x;
  *x = *y;
  *y = tempInt;
}
