/* 
  Created by Gregory Tretiakov
  Quick and simple C command line that can be implemented into a
  UNIX machine to reduce the hassle of having to print out the same 
  characters over and over again.
  
*/
#include<stdio.h>

int main(long long int argc, char **argv) {
 
  int i=0; 
  if (argc==1||argc>=5){
    printf("\nWrong Format\n./test INT\n./test INT STRING\n./test INT STRING -sq\n -s will eliminate all spaces between words\n -q will silence the additional output\n\n");
    return 0;
  }

  if (argc==2){
    int total= atoi(argv[1]);

    printf("\n\n");

    for (i = 0; i <total; ++i) {
      printf("A ");
    }
    printf("\n\n");
    printf("Operation Complete\n\n");
    return 0;
  }

  if (argc==3){
    int total= atoi(argv[1]);

    printf("\n\n");

    for (i= 0; i <total; ++i) {
      printf("%s ",argv[2]);
    }
    printf("\n\n");
    printf("Operation Complete\n\n");
    return 0;
  }
  
  if (argc==4){
    int total= atoi(argv[1]);
    if (strcmp(argv[3],"-s")==0){
      printf("\n\n");
      for (i= 0; i <total; ++i) {
	printf("%s",argv[2]);
      }
      printf("\n\n");
      printf("Operation Complete\n\n");
      return 0;
    }else if (strcmp(argv[3],"-q")==0){
      for (i= 0; i <total; ++i) {
	printf("%s ",argv[2]);
      }
      return 0;
    }else if (strcmp(argv[3],"-sq")==0){
      for (i= 0; i <total; ++i) {
        printf("%s",argv[2]);
      }
      return 0;
    }else if (strcmp(argv[3],"-qs")==0){
      for (i= 0; i <total; ++i) {
        printf("%s",argv[2]);
      }
      return 0;
    }else{
      printf("\nWrong Format\n./test INT\n./test INT STRING\n./test INT STRING -sq\n -s will eliminate all spaces between words\n -q will silence the additional output\n\n");
      return 0;
     }
    }

  
  

  return 0;
}
