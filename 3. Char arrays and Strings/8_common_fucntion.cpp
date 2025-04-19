// some common fuctions used.

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string xyz ;
    cout<<"Enter your input for xyz : "; 
    getline(cin,xyz);
    cout<<"The string you entered is : "<<xyz<<endl;

    // str_name.empty() to check wether string is empty .
    cout<<"The size is : "<<xyz.size()<<endl;

    // str.push_back()  to insert element, similarly pop_back.
    xyz.push_back('P');
    cout<<"String after push back : "<<xyz<<endl;
    

    // get substring of a string use string_name.substr()     (  does not modify original string).
    string abc = xyz.substr(2,3);
    cout<<"the substring is : "<<abc<<endl;

    string a = "Phadtare";
    cout<<endl;
    cout<<a.substr(3);   // this will print all elements starting form index 3 onwards.


    string b = "vikas phadtare";
    cout<<endl;
    cout<<b.substr(6,4)<<endl; // this will print 4 elements starting form 6th index. 

    //compare function to compare two strings.

    string x = "love";
    string y = "love";

    if(x.compare(y) == 0){
        cout<<"Both strings x and y are same ";
    }
    else{ 
        cout<<"Both strings x and y are different ";
    }


    // find function to find the words in strings.
    string p = "rada dada 8100";
    cout<<endl;
    cout<<p.find("8100")<<endl;
    
    int t = p.find("7100");
    if(t== p.npos){                       // p.npos gives random vlaue can also be written as string::npos;
        cout<<"Not found"; 
    }
    else{
        cout<<"found at "<<t;
    }


    // replace fucntion from string class .

    string q = "My name is vishwajeet mirgane";
    string p = "phadtare";
    q.replace(q.find("mirgane"),7,p);   // str_name(start_index , how much elements to remove, replace with string )
    cout<<q;


    // erase ;

    string r =" start form now . ";

    r.erase(6,4); //   str_name.erase(start_index , how many elements)
    cout<<r;


    // stoi -->  string to integer conversion.

    string s = "12";

    int integer = stoi(s);
    cout<<integer+3;


    return 0;
}