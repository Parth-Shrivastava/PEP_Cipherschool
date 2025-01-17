//Naive Approach:
#include <iostream>
    #include <list>
    using namespace std;
    
    int main() {
        list<int> integ;
        int num;
        char c;
        while(true){
            if(!(cin>>num)) break;
            integ.push_back(num);
        }
        int sum=0;

        for(int n:integ){
            sum+=n;
        }
        cout<<sum;
        return 0;
    }

//Recursive Approach
#include <iostream>
#include <list>
using namespace std;

 int Recursive_sum(list<int>:: iterator it, list<int>::iterator end){
        if(it == end) return 0;
        return *it+Recursive_sum(next(it),end);
    }
    
    int main() {
        list<int> integ;
        int num;
        char c;
        while(true){
            if(!(cin>>num)) break;
            integ.push_back(num);
        }
        

        cout<<Recursive_sum(integ.begin(),integ.end());
        return 0;
    }


//Functional Approach

 int main() {
        list<int> integ;
        int num;
        char c;
        while(true){
            if(!(cin>>num)) break;
            integ.push_back(num);
        }
        int sum=accumulate(integ.begin(),integ.end(),0);
        

        cout<<sum;
        return 0;
    }



// all three approaches take O(n) time for listing and O(n) time for summing hence O(n) is final time complexity.
