#include <iostream> // cout, cin, cerr, clog

int main() {
  // type name [size]
  int scores[10] = {100,200,300,400,500,600,700,800,900};
  std::cout << "scores = " << scores << std::endl;
  std::cout << "scores[0] = " << scores[0] << std::endl;
  
  for (int index = 0; index < 10; index++)
  {
    std::cout << scores[index] << std::endl;
  }
  std::cout << std::endl;
  
  float gpa[10] = { 1.0, 2.0, 3.0, 4.0, 1.1, 2.2, 3.3, 4.4};
  for (int index = 0; index < 10; index++)
  {
    std::cout.precision(1);
    std::cout << std::fixed << gpa[index] << std::endl;
  }
  std::cout << std::endl;

  
  // multi_dimensional array
  int ttt[3][3] = 
  {
    {0,1,2}, // array 1
    {3,4,5}, // array 2
    {6,7,8}  // array 3
  };
  
  std::cout << ttt[0][0] << std::endl;
  std::cout << ttt[2][2] << std::endl;
  std::cout << std::endl << std::endl;
  
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      std::cout << ttt[i][j];
    }
    std::cout << std::endl;
  }
  return 0;
}