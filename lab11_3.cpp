#include <iostream>
#include <fstream>
#include <string>
#include<cmath>
#include<cstdlib>
#include <iomanip>
using namespace std;
int main(){

 int count = 0;
 float sum = 0;
 float sum1 = 0;
 string textline;
 ifstream source("score.txt");
 while(getline(source, textline)){
    count++;
    sum += atof(textline.c_str());
    sum1 += pow(atof(textline.c_str()), 2);
 }



cout << "Number of data = " << count << endl;
cout << setprecision(3);
cout << "Mean = " << sum/count << endl;
cout << "Standard deviation = " << sqrt(((sum1/count) - pow((sum/count), 2)));

return 0;
}