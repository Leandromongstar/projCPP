#include <iostream>
 
 using namespace std;
 
 int main() {
    //calculadora para quem tem o básico...
    //em c++
    double num;
    double num01;
    cout<<"DIGITE SEU PRIMEIRO NÚMERO:"<<endl;
    cin>>num;
    cout<<"DIGITE SEU SEGUNDO NÚMERO:"<<endl;
    cin>>num01;
    cout<<"-----------------------------------------"<<endl;
    cout<<"ESCOLHA UMA OPERAÇÃO"<<endl;
   string operacao;
  cout<<"(M)multiplicação-(A)adição-(S)Soma-(D)divisão|-->"<<endl;
  cin>>operacao;
  
  if (operacao=="M" && "m"){
  cout<<""<<num<<"x"<<num01<<"="<<num*num01<<endl;
  }else if(operacao=="A" && "a"){
     cout<<""<<num<<"-"<<num01<<"="<<num-num01<<endl;
  }else if(operacao=="S" && "s"){
    cout<<""<<num<<"+"<<num01<<"="<<num+num01<<endl;
  }else if(operacao== "D" && "d"){
     cout<<""<<num<<"/"<<num01<<"="<<num/num01<<endl;
  }else{
    cout<<"digite sua operação"<<endl;
  }
   
    return 0;
 }
