#include<bits/stdc++.h>
using namespace std;

class Movie{
    protected:
    string name;
    float runLength;

    public: 
    Movie(string n, float r){
        name=n;
        runLength=r;
    }

    virtual void display(){
        cout<<"Movie name : "<<name<<endl;
        cout<<"Movie run length :"<<runLength<<endl;
    }

    virtual ~Movie() {}
};

class MovieRating : public Movie{
    protected:
    float rating;

    public:
    MovieRating(string n, float r, float rm) : Movie(n,r){
        rating=rm;
    }

    void display() override{
        cout<<"Movie name : "<<name<<endl;
        cout<<"Movie run length :"<<runLength<<endl;
        cout<<"Movie Critique Rating : "<<rating<<endl;
    }
};

class MovieCast : public MovieRating{
    protected:
    string leadActor;
    string leadActress;

    public:
    MovieCast(string n, float r, float m, string n1, string n2) : MovieRating(n,r,m){
        leadActor = n1;
        leadActress = n2;
    }

    void display() override{
        cout<<"Movie name : "<<name<<endl;
        cout<<"Movie run length :"<<runLength<<endl;
        cout<<"Movie Critique Rating : "<<rating<<endl;
        cout<<"Leading Actor : "<<leadActor<<endl;
        cout<<"Leading Actress : "<<leadActress<<endl;
        cout<<"----------------------------------"<<endl;
    }

};

int main(){
    MovieCast m("Inception",2.5,9.5,"Leonardo DiCaprio","Marion Cotillard");
    m.display();

    Movie * movie_class_pointer;
    movie_class_pointer = &m;
    movie_class_pointer->display();

    MovieRating * rating_class_pointer;
    rating_class_pointer = &m;
    rating_class_pointer->display();
    return 0;
}