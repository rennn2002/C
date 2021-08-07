#include <stdio.h>
#include <stdlib.h>

void usage(char *prog_name) {
  printf("Usage: %s <integer to convert to binary>\n", prog_name);
  exit(1);  
}
  
void binary(unsigned int value) {
  unsigned int mask = 0xff000000;
  unsigned int shift = 256*256*256;
  unsigned int byte, byte_iterator, bit_iterator;

  for(byte_iterator=0; byte_iterator < 4; byte_iterator++) {
    byte = (value & mask) / shift;
    if(byte_iterator > 0) {
    printf(" ");
    }
    for(bit_iterator=0; bit_iterator < 8; bit_iterator++) {
      if(byte & 0x80) {
        printf("1");
      } else {
        printf("0");
      }
      byte *= 2;
    }
    mask /= 256;
    shift /= 256;
  }
}

int main(int argc, char *argv[]) {
  if(argc < 2) {
    usage(argv[0]);
  } 
  unsigned int input = (unsigned int)atoi(argv[1]);
  binary(input);
  printf("\n");
  return 0;
}
