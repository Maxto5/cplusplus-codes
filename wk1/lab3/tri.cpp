#include <iostream>
using namespace std;
int main(){
  //declare variables
  int height,base,width;
  
  //collect input
  cin >> height >> base >> width; 

  //process logic
  if (height == base && height == width && width == base)
      cout<<"equilateral"<<endl;
  
  else if (height != base && height != width && width != base)
      cout<<"scalene"<<endl;

  else if ((height == base && base!= width) || (base==width && width != height)||(width == height && width !=base))
      cout<<"isosceles"<<endl;

return 0;
}
