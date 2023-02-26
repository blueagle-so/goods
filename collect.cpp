#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct goods 
{
    int id;
    string name;
    int current;
    string count;
    void readdb();
    void writedb();
    void analiz();
    goods() {}
    goods(string& in);
    goods(int& id, string& name, int& current, string& count)
        : id(id), name(name), current(current), count(count)
    {}
};

istream& operator>>(istream& is, goods& en)
{
    is >> en.id;
    is >> en.name;
//    is >> en.min;
    is >> en.current;
    is >> en.count;
    return is;
}

ostream& operator<<(ostream& os, const goods& en)
{
    os << en.id << " " << en.name << " " << en.current << " " << en.count << endl;
    return os;
}

void goods::writedb(){

goods e1;
cout<<"id"<<endl;
cin>>e1.id;
cout<<"name"<<endl;
cin>>e1.name;
//cout<<"min"<<endl;
//cin>>e1.min;
cout<<"current"<<endl;
cin>>e1.current;
cout<<"count"<<endl;
cin>>e1.count;


ofstream out("goodscur.db", ios::app);
out << e1;
out.close();
}

void goods::readdb(){

ifstream in("goodscur.db");
goods e;
in >> e;
cout << "id" << " " << "name" << " " << "current" << " " << "count" << endl;
while(!in.eof()){
ios state(nullptr);
state.copyfmt(cout); 
//    cout.copyfmt(state); // restore previous formatting


cout << e.id << " ";

//ios state(nullptr);
//state.copyfmt(cout); 
//    cout.copyfmt(state); // restore previous formatting

cout.width(10);
cout.setf(ios::left);

cout << e.name; 
 cout.copyfmt(state); // restore previous formatting

cout << " " << e.current << " " << e.count << endl;
in >> e;
}
in.close();

}


void goods::analiz(){

ifstream in("goodscur.db");
goods e;
in >> e;
char x[10];
int i=0;
while(!in.eof())
{
//in >> e;
cout << "how match you have " << e.count << " " << e.name << endl; 
while(!(cin>>x[i])){};
i++;
//cin>>(p[(int)e.id]);
//cin.get();

in >> e;
}

in.close();
int k=0;
for(int j=0;j<8;j++)
if(x[j]=='y')k++;
cout<<"you have "<<k<<"/8"<<" goods"<<endl;

}





int main(){
cout << "0.write"<< endl;
cout << "1.read" << endl;
cout << "2.analiz"<<endl;
int p;
cin>>p;
goods db;
switch(p){
	case 2:{db.analiz();break;}
	case 0:{db.writedb();break;}
        case 1:{db.readdb();break;}
}
}
