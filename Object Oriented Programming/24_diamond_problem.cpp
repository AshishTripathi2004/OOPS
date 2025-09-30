#include<bits/stdc++.h>
using namespace std;

class Students{
    protected:
    int roll_number;

    public:
    void setRoll(int r){
        roll_number=r;
    }
};

class Test : virtual protected Students{
    protected:
    float test_score;

    public:
    void setTestScore(float val){
        test_score=val;
    }
};

class Sports : virtual protected Students{
    protected:
    float pe_score;

    public:
    void setPEScore(float val){
        pe_score=val;
    }
};

class Results : protected Test, protected Sports{
    protected:
    float total_score;

    public:

    //create a wrapper for using all the base class member functions
    void setDetails(int r, float t, float p){
        setRoll(r);
        setTestScore(t);
        setPEScore(p);
        total_score=(t+p)/2.0;
    }

    void getScoreCard(){
        cout<<"Roll No. : "<<roll_number<<endl;
        cout<<"---------------------"<<endl;
        cout<<"Test Score : "<<test_score<<endl;
        cout<<"PE Score : "<<pe_score<<endl;
        cout<<"---------------------"<<endl;
        cout<<"Total Score : "<<total_score<<endl;
    }
};

int main(){
    Results r;
    r.setDetails(111,98,97);
    r.getScoreCard();
    return 0;
}