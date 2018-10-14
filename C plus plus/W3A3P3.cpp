/*
 *	Problem Statement
 *	
 *	Fill in the blanks with proper code snippets to complete the class Queue.
 *	You need to match the output as per the test cases.
 *
 *	Hint: Queue is a data structure which follows First In First Out (FIFO) principle. 
 *	Elements in a queue are added from its rear end and deleted from its front
 *
 */

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

class Queue {
    private : 

        vector<char> data_;

        int front_, rear_;
    public :
        Queue():front_(-1), rear_(-1)  { data_.resize(20); }             //Write the missing statement

        ~Queue() {};

        int empty() {
            if (rear_ < front_ || (rear_ == -1 && front_ == -1)){       //Write the missing statement    

                front_ = rear_ = -1 ;
                return 1;
            }
            else
                return 0;
        }
        void add(char x) {

            data_[++rear_]=x;                                           //Write the missing statement

            if (front_ == -1)
               
                front_++;                                               //Write the missing statement
            
        }
        void del( ) {   
						if(!empty())   front_++;                                    //Write the missing statement
        }                                                               

        char front() { return data_[front_] ; }                         //Write the missing statement

} ; // End of the class

int main( ) {
    Queue q;
    char str[20];
    
    cin >> str;
    for (int i = 0; i < strlen(str); ++i)

        q.add(str[i]);
        
    while (!q.empty()) {

        cout << q.front();

        q.del();
    }
    
    return 0;
}
