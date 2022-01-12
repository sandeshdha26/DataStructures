#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string text;
    string text1; 
    string text2;
    cin>>text;
  /* cin>>text1;
    cin>>text2; */
    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] == ("a || A" && "e || E" && "i || I" && "o || O" && "u || U"))
        {
            cout<<"lovely string";
            cout<<endl;
            return 0;
        }
        else        //if(text1[] == "a || A" || "e||E" || "i||I" || "o||O" || "u||U")
        {
            cout<<"ugly string";
            cout<<endl;
        }
        break;
    }
    cin>>text1;
    for(int i = 0;i < text1.length(); i++)
    {
        if(text1[i] == ("a || A" && "e || E" && "i || I" && "o || O" && "u || U"))
        {
            cout<<"lovely string";
            cout<<endl;
            return 0;
        }
        else
        {
            cout<<"ugly string";
            cout<<endl;
        }
        break;
    }
    cin>>text2;
    for(int i = 0;i < text2.length(); i++)
    {
        if(text2[i] == ("a || A" && "e || E" && "i || I" && "o || O" || "u || U"))
        {
            cout<<"lovely string";
            cout<<endl;
            return 0;
        }
        else
        {
            cout<<"ugly string";
            cout<<endl;
        }
        break;
    }
    return 0;
}