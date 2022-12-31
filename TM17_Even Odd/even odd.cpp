# include <iostream>
# include <fstream>
# include <cstdlib>
using namespace std;

int main()
{
    ifstream in("sample.txt");

    int oddNumber[100],oddIndex=10;
    int evenNumber[100],evenIndex=10;

    string evenList[10] = { "2 Sample document\n\n","4 Java program\n\n","6 Object oriented\n\n","8 Word power\n\n" };
ofstream fe("even.txt", std::ofstream::out);
string oddList[10] = {" 1 Pre-Processor\n\n","3 UNIX system\n\n","5 Program structure\n\n","5 Program structure\n\n","9 Programming Language\n\n"};
ofstream fo("odd.txt", std::ofstream::out);
if (fe.is_open())
{
  //store array contents to text file
  for (int i = 0; i < 10; i++) {
    fe << evenList[i] << "\n";
  }
  fe.close();
}
else cout << "Problem with opening file";


if (fo.is_open())
{
  //store array contents to text file
  for (int i = 0; i < 10; i++) {
    fo << oddList[i] << "\n";
  }
  fo.close();
}
else cout << "Problem with opening file";

return 0;
}







