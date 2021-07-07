#include<iostream>
using namespace std;

class animal{
    public:
    void walks(){
        cout<<endl<<"animal walk:"<<endl;
    }
};

class tiger: virtual public animal{
  
};

class lion: virtual public animal{
  
};

//diamond problem

class tigerlion: public lion, public tiger{
  
};
int main(){

        tigerlion obj;
        obj.walks();


    return 0;
}