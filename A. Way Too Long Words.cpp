#include<iostream>
#include<string>

int main(){
    int n{};
    std::cin>>n;
    
    
    while(n--){
        
    std::string str;
    
    std::cin>>str;
    
    int len= str.length();
    
    if(len>10){
        std::cout<<str[0]<<len-2<<str[len-1]<<std::endl;
        }
    
    else{
        std::cout<<str<<std::endl;
        }
    
    }
    
    return 0;
}