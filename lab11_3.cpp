#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>

using namespace std;

int main(){
    ifstream source;
	source.open("score.txt");
    string num;
    double sum;
    double sum1;
    int count;
    while(getline(source,num)){
        sum += atof(num.c_str());
        sum1 += pow(atof(num.c_str()),2);
        count++;
    }
    
    cout <<"Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/count << "\n";
    cout << "Standard deviation = " << sqrt(((sum1/count))-((sum/count)*(sum/count)));
}
