#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
  /*
    char input = FUCK;
    bool uniquity = true;
    Algorithmic steps
    compare F to U, C, K
      compare U to F, C, K
        compare C to F, U, K
          compare K to F, U, C


    //for( start at input[0] and go until the '0' (EOStr char) )
    for( int i = 0; i < n; i++ )
    {
      
      this = input[i]; //Pull letter out for comparison
      
      //Next we need to traverse the remaining characters
      //for( start at input[0] and go until the '0' (EOstr char) )
      for( int j = 0; j < n; j++ )
      {
        //First comparison F == U
        if( (i != j) && (this[i] == input[j]) )
        {
          //string is not unique
          uniquity = false;
        }
      }
  */
  char input[] = "FUCF";
  bool uniquity = true;

  int n = (sizeof(input) / sizeof(char));

  //printf("%d\n", n);

  for( int i = 0; i < n; i++ ) {

    for( int j = 0; j < n; j++ ){
      //Compare the characters
      if( (i != j) && (input[i] == input[j]) )
      { uniquity = false; }
    }
  }

  if( uniquity == false )
  { printf("%s\n", "String is not unique"); }
  else
    { printf("%s\n", "String is unique"); }


  return 0;
}
