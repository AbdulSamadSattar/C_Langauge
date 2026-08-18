#include <iostream>
using namespace std; 
main() 
{ 
 short x; 
 short y; 
 short z; 
 x = 5; 
 y = 10; 
 z = x + y;
 std::cout << "x = "; 
 std::cout << x; 
 std::cout << " y="; 
 std::cout << y; 
 std::cout << " z = x + y = "; 
 std::cout << z<<endl;
 std::cout << "Size of short: "<<sizeof(x) <<endl << "size of int: " << sizeof(int(x));
}
