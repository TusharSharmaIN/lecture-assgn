/*
 *	Problem Statement
 *	
 *	Fill up the blanks in the constructor to get the output as per the test cases.
 *
 */

#include <iostream>
using namespace std;

class Sample 
{
  public:
    int data_ ;
    char  graph_, data_or_graph_;

    Sample(int d=6, char dg='C',char g='A'): data_(d), graph_(g), data_or_graph_(dg)        //Write Arguments for constructor 
    {
        cout << data_ << " " << data_or_graph_ << " " << graph_ << " " << endl;  
    }

}; // End of the class

int main() 
{
    int x; char y;  
    cin >> x >> y ;
    Sample s1(x+1, y-1), s3;
    return 0;
}
